#include "tablefactory.h"

TableFactory::TableFactory() : FurnitureFactory()
{
}

TableFactory::~TableFactory()
{}

std::shared_ptr < Furniture > TableFactory::create() const
{
    return std::shared_ptr < Furniture > ( std::make_shared < Table > () );
}
