#include "table.h"

Table::Table() : Furniture()
{
    std::cout << "Table acquired\n";
}

Table::~Table()
{
    std::cout << "Table destroyed\n";
}

void Table::print() const
{
    std::cout << "I am a table\n";
}
