#include "test_composite1.h"

namespace Composite1_ {

    void test_composite1()
    {
        std::unique_ptr < Unit > roman_army ( std::make_unique < Composite > () );

        for ( int counter = 0; counter < 4; ++counter )
            if ( roman_army )
                roman_army.get()->add_unit ( create_legion() );

        std::cout << "Roman army of 4 legions has strength:\n";
        if ( roman_army )
            std::cout << roman_army.get()->get_strength() << '\n';

    }


}
