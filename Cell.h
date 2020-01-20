#pragma once
#include <vector>


class Cell {
	friend class SudokuPuzzle;
	friend class CellGroup;
public:
	Cell(void);
	Cell(int number, int x, int y);
	~Cell(void);

	int get_theValue()const;
	void Cell::Set_theValue(const int value);
	void Cell::Set_theBool(const bool value);
	std::vector<int> Cell::get_all_possibilities()const;
	void Cell::edit_all_possibilities (const int remove_number);

private:
	int x;
	int y;
	int contains;
	bool isSolved;
	std::vector <int> all_possibilities;
};