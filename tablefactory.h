#ifndef TABLEFABRIC_H
#define TABLEFABRIC_H

#include "furniturefactory.h"
#include "table.h"

class TableFactory : public FurnitureFactory
{
public:
    TableFactory();
    virtual ~TableFactory() override;

    std::shared_ptr < Furniture > create() const override;
};

#endif // TABLEFABRIC_H
