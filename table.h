#ifndef TABLE_H
#define TABLE_H

#include "furniture.h"

class Table : public Furniture
{
public:
    Table();
    virtual ~Table() override;

    virtual void print() const override;
};

#endif // TABLE_H
