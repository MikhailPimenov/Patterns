#ifndef CHAIRFABRIC_H
#define CHAIRFABRIC_H

#include "furniturefactory.h"
#include "chair.h"

class ChairFactory : public FurnitureFactory
{
public:
    ChairFactory();
    virtual ~ChairFactory() override;

    virtual std::shared_ptr < Furniture > create() const override;
};

#endif // CHAIRFABRIC_H
