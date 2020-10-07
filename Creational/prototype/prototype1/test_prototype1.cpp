#include "test_prototype1.h"

namespace Prototype1_ {

    Infantryman Infantryman::s_prototype = Infantryman ( Dummy() );
    Horseman       Horseman::s_prototype = Horseman ( Dummy() );
    Archer           Archer::s_prototype = Archer ( Dummy() );

    void test_prototype()
    {
        std::cout << "test_prototype(): start\n";

        std::vector < std::unique_ptr < Warrior > > vector;
        vector.push_back ( Warrior::create_warrior ( Warrior_ID::Infantryman_ID ) );
        vector.push_back ( Warrior::create_warrior ( Warrior_ID::Infantryman_ID ) );
        vector.push_back ( Warrior::create_warrior ( Warrior_ID::Infantryman_ID ) );

        vector.push_back ( Warrior::create_warrior ( Warrior_ID::Archer_ID ) );
        vector.push_back ( Warrior::create_warrior ( Warrior_ID::Horseman_ID ) );

        for ( const auto &element : vector )
            if ( element )
                element->info();

        std::cout << "test_prototype(): end\n";
    }

}
