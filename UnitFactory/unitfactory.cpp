#include "unitfactory.h"

UnitFactory::UnitFactory()
{
}

UnitFactory::~UnitFactory()
{}

std::unique_ptr < Unit > UnitFactory::create() const
{
    std::unique_ptr < Hemlet_base > hb ( std::make_unique < Hemlet > () );
    std::unique_ptr < Sword_base > sb ( std::make_unique < Sword > () );

    std::unique_ptr < Unit > ub ( std::make_unique < Unit > ( hb, sb ) );
    return ub;
}
