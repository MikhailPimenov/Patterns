#include "unitlightfactory.h"



UnitLightFactory::UnitLightFactory ()
    : Abstract_UnitFactory()
{}

UnitLightFactory::~UnitLightFactory()
{}

std::unique_ptr < Unit > UnitLightFactory::create() const
{
    std::unique_ptr < Hemlet_base > hb ( std::make_unique < HemletLight > () );
    std::unique_ptr < Sword_base > sb ( std::make_unique < SwordLight > () );

    std::unique_ptr < Unit > ub ( std::make_unique < Unit > ( hb, sb ) );
    return ub;
}
