#ifndef FURNITUREFABRIC_H
#define FURNITUREFABRIC_H

#include <memory>
#include "furniture.h"

class FurnitureFactory
{
public:
    FurnitureFactory();
    virtual ~FurnitureFactory();

    virtual std::shared_ptr < Furniture > create() const = 0;
};

#endif // FURNITUREFABRIC_H
