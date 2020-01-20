#include "SudokuPuzzle.h"
#include <Windows.h>
#include<algorithm>


SudokuPuzzle::SudokuPuzzle(void)
{
	m_grid[81] = nullptr;
}

SudokuPuzzle::~SudokuPuzzle(void)
{
}

void SudokuPuzzle::Solve(char filenameIn[])
{
	InitialiseCells(filenameIn);
	// You will need to read the values of the Sudoku puzzle into your data structure
	LARGE_INTEGER start, end, frequency;
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&start);
	// Solve the puzzle
	EachCell();

	QueryPerformanceCounter(&end);
	float time = (end.QuadPart - start.QuadPart) / (static_cast<float> (frequency.QuadPart));

	Output();  // Output the solved puzzle
}

void SudokuPuzzle::InitialiseCells(char filenameIn[]) {

	// Read in letters
	int columnRow[9][9];
	ifstream ifs; // DO NOT CHANGE THE NAME OF THIS FILE
	ifs.open(filenameIn, std::ifstream::in);
	char s;
	if (ifs.good())
	{
		for (int y = 0; y < 9; ++y)
		{
			for (int x = 0; x < 9; ++x)
			{
				// output each grid value followed by " "
				s = ifs.get();
				if (s != ' ') {
					columnRow[y][x] = ((int)s - 48);
				}
				else {
					x--;
				}
			}
			s = ifs.get();
		}
	}
	ifs.close();

	// Fill up cells
	int gridIndex = 0;
	int grid_number = 0;
	int grid_Editnumber = 0;
	int grid = 0;
	int row = 0;
	int column = 0;

	int grid_lok = 0;

	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{

			if (column > 8) {
				column = 0;
				row++;
			}

			// CALCULATE M_GRID, M_GRID_Columns, M_GRID_ROWS
			m_grid[grid] = new Cell(columnRow[y][x], x, y);
			m_grid_Columns[x].SetCell(y, m_grid[grid]);
			m_grid_Rows[y].SetCell(x, m_grid[grid]);

			if (grid_Editnumber > 2)
			{
				gridIndex++;
				grid_Editnumber = 0;
				grid_lok++;
				if (grid_lok > 2)
				{
					if (row < 3)
					{
						gridIndex = 0;
					}
					else if (row < 6)
					{
						gridIndex = 3;
					}
					else if (row < 9)
					{
						gridIndex = 6;
					}
					grid_lok = 0;
				}
			}

			if (row == 0 || row == 3 || row == 6)
			{
				grid_number = grid_Editnumber;
			}
			else if (row == 1 || row == 4 || row == 7)
			{
				grid_number = grid_Editnumber + 3;
			}
			else if (row == 2 || row == 5 || row == 8)
			{
				grid_number = grid_Editnumber + 6;
			}

			m_grid_Block[gridIndex].SetCell(grid_number, m_grid[grid]);

			grid++;
			grid_Editnumber++;
			column++;
		}
	}
}
// This is an example of how you may output the solved puzzle
void SudokuPuzzle::EachCell() 
{
	BEGIN:
	int count = 0;
	bool skip = false;
	for (int i = 0; i < 9; i++)
	{
		if (skip == true)
		{
			count--;
			skip = false;
		}
		for (int x = 0; x < 9; x++)
		{
			if (skip == true)
			{
				count--;
				skip = false;
			}
			Cell currentCell =*m_grid[count];

			if (currentCell.get_theValue() == 0) {
				std::vector<int> rows = m_grid_Rows[currentCell.y].GrabAllNumbers();
				std::vector<int> column = m_grid_Columns[currentCell.x].GrabAllNumbers();

				int block1 = ((currentCell.x / 3) + ((currentCell.y / 3) * 3));
				std::vector<int> block = (m_grid_Block[block1].GrabAllNumbers());


				std::vector<int> allNumbers;
				std::vector<int> allNumbersFiltered;

				allNumbers.insert(allNumbers.begin(),rows.begin(), rows.end());
				allNumbers.insert(allNumbers.end(), column.begin(), column.end());
				allNumbers.insert(allNumbers.end(), block.begin(), block.end());

				for (size_t i = 0; i < allNumbers.size(); i++)
				{
					auto value = std::find(allNumbersFiltered.begin(), allNumbersFiltered.end(), allNumbers[i]);
					if (value == allNumbersFiltered.end()) {
						allNumbersFiltered.push_back(allNumbers[i]);
					}
				}
				for (int i = 0; i < allNumbersFiltered.size(); i++)
				{
					for (int x = 0; x < currentCell.all_possibilities.size(); x++)
					{
						if (allNumbersFiltered[i] == currentCell.all_possibilities[x])
						{
							currentCell.all_possibilities.erase(currentCell.all_possibilities.begin() + x);
						}
					}
				}
				if (currentCell.all_possibilities.size() == 1 && currentCell.isSolved == false)
				{
					currentCell.Set_theBool(true);
					currentCell.Set_theValue(currentCell.all_possibilities[0]);
					*m_grid[count] = currentCell;
					count = 0;
					//x = 0;
					//i = 0;
					//skip = true;
				goto BEGIN;
				}
				//currentCell.get_all_possibilities 
			//	//check column
			//	//check row
			//	//check gridblock
			}
				count++;
		}
	}
}
void SudokuPuzzle::Output() const
{
	int count = 0;
	ofstream fout("sudoku_solution.txt"); // DO NOT CHANGE THE NAME OF THIS FILE
	if (fout.is_open())
	{
		for (int y = 0; y < 9; ++y)
		{
			for (int x = 0; x < 9; ++x)
			{
				// output each grid value followed by " "
				fout << std::to_string( m_grid[count]->contains) + " ";
				count++;
			}
			
			fout << endl;
		}
		fout.close();
	}
}
Cell::~Cell()
{
}