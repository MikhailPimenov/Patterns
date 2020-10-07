#include "usecase_prototype1.h"

namespace Prototype1_ {


    Warrior::~Warrior()
    {}
    std::unique_ptr < Warrior > Warrior::create_warrior ( Warrior_ID id )
    {
        Registry_t &r = get_registry();

        if ( r.find ( id ) != r.cend() )
            return r[id]->clone();

        return nullptr;
    }
    void Warrior::add_prototype ( Warrior_ID id, Warrior *prototype )
    {
        Registry_t &r = get_registry();

        r[id] = prototype;
    }
    void Warrior::remove_prototype ( Warrior_ID id )
    {
        Registry_t &r = get_registry();

        r.erase ( r.find ( id ) );
    }


    Infantryman::~Infantryman()
    {}
    Infantryman::Infantryman ( Dummy )
    {
        Warrior::add_prototype ( Warrior_ID::Infantryman_ID, this );
    }
    std::unique_ptr < Warrior > Infantryman::clone()
    {
        return std::make_unique < Infantryman > ( *this );
    }
    void Infantryman::info()
    {
        std::cout << "Infantryman\n";
    }


    Archer::~Archer()
    {}
    Archer::Archer ( Dummy )
    {
        Warrior::add_prototype ( Warrior_ID::Archer_ID, this );
    }
    std::unique_ptr < Warrior > Archer::clone()
    {
        return std::make_unique < Archer > ( *this );
    }
    void Archer::info()
    {
        std::cout << "Archer\n";
    }


    Horseman::~Horseman()
    {}
    Horseman::Horseman ( Dummy )
    {
        Warrior::add_prototype ( Warrior_ID::Horseman_ID, this );
    }
    std::unique_ptr < Warrior > Horseman::clone()
    {
        return std::make_unique < Horseman > ( *this );
    }
    void Horseman::info()
    {
        std::cout << "Horseman\n";
    }


}
