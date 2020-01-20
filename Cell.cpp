#include "Cell.h"
//cell m_grid[i] = new cell();
//setvalue
//setlist
//setbool

//cell m_grid[i] = new cell(value);
Cell::Cell(int value, int x, int y)
{
	
	this->y = y;
	this->x = x;
	contains = value;
	isSolved = value != 0 ? true : false;
	all_possibilities = std::vector<int>();
	for (int i = 1; i < 10; i++)
	{
		all_possibilities.push_back(i);
	}
}
Cell::Cell()
{
	y = 0;
	x = 0;
	contains = 0;
	isSolved = false;
	all_possibilities = std::vector<int>();
}
int Cell::get_theValue()const
{
	return this->contains;
}
void Cell::Set_theValue(const int value)
{
	this->contains = value;
}
void Cell::Set_theBool(const bool value)
{
	this->isSolved = value;
}
std::vector<int> Cell::get_all_possibilities()const
{
	return this->all_possibilities;
}

void Cell::edit_all_possibilities(const int value) {

	for (unsigned i = 0; i < all_possibilities.size(); i++)
	{
		if (all_possibilities.at(i) == value) {

			all_possibilities.erase(all_possibilities.begin() + i);
			break;
		}
	}
}