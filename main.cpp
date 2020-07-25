#include <iostream>
#include <memory>

#include "UnitFactory/unitlightfactory.h"
#include "UnitFactory/unitfactory.h"
#include "UnitFactory/unitheavyfactory.h"
// patterns: abstract factory

void getUnit ( const Abstract_UnitFactory &ufb )
{
    std::unique_ptr < Unit > unit ( ufb.create() );
    unit.get()->showItems();
}

int main()
{
    UnitLightFactory unit1;
    getUnit ( unit1 );

    UnitFactory unit2;
    getUnit ( unit2 );

    UnitHeavyFactory unit3;
    getUnit ( unit3 );

    return 0;
}
