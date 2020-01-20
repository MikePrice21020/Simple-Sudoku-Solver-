#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "Cell.h"
#include "CellGroup.h"
using namespace std;

class SudokuPuzzle
{
public:
	SudokuPuzzle(void);
	~SudokuPuzzle(void);

	void Solve(char filenameIn[]);

private:

	void InitialiseCells(char filenameIn[]);
	void EachCell();
	Cell* m_grid[81];

	// 0  1  2  3
	// 1 [ ][ ][ ]
	// 2 [ ][ ][ ]
	// 3 [ ][ ][ ]
	CellGroup m_grid_Block[9];

	// 1  2  3  4  5  6
 	//[ ][ ][ ][ ][ ][ ]
	CellGroup m_grid_Rows[9];

	CellGroup m_grid_Columns[9];
	//methods
	void Output() const;
};

