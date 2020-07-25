#include "unitheavyfactory.h"

UnitHeavyFactory::UnitHeavyFactory()
{}

UnitHeavyFactory::~UnitHeavyFactory()
{}

std::unique_ptr < Unit > UnitHeavyFactory::create() const
{
    std::unique_ptr < Hemlet_base > hb ( std::make_unique < HemletHeavy > () );
    std::unique_ptr < Sword_base > sb ( std::make_unique < SwordHeavy > () );

    std::unique_ptr < Unit > ub ( std::make_unique < Unit > ( hb, sb ) );
    return ub;
}
