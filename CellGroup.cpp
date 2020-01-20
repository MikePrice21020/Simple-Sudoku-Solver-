#include "CellGroup.h"
#include<algorithm>
CellGroup::CellGroup(void) : m_cells{0}
{
}


CellGroup::~CellGroup(void)
{
}

Cell CellGroup::Getcell(int index)const
{
	return *m_cells[index];
}
void CellGroup::SetCell(int index, Cell *cell)
{
	m_cells[index] = cell;
}
std::vector<int> CellGroup::GrabAllNumbers()const {
	
	std::vector<int> fullList = std::vector<int>();
	for (size_t i = 0; i < 9; i++)
	{
		Cell test = *m_cells[i];
		if (test.contains != 0) {
				fullList.push_back(test.contains);
		}
	}
	return fullList;

}