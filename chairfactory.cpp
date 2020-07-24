#include "chairfactory.h"

ChairFactory::ChairFactory() : FurnitureFactory()
{
}

ChairFactory::~ChairFactory()
{}

std::shared_ptr < Furniture > ChairFactory::create() const
{
    return std::shared_ptr < Furniture > ( std::make_shared < Chair > () );
}
