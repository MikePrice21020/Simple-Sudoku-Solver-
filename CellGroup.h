#pragma once
#include "Cell.h"
class CellGroup
{
public:

	CellGroup(void);
	~CellGroup(void);

	void SetCell(int index, Cell *cell);
	std::vector<int> CellGroup::GrabAllNumbers()const;
	// Other Methods
	Cell Getcell(int index)const;

private:

	Cell* m_cells[9];
};