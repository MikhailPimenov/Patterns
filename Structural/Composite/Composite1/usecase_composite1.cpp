#include "usecase_composite1.h"

namespace Composite1_ {

    Unit::Unit()
    {}
    Unit::~Unit()
    {}
    void Unit::add_unit ( std::unique_ptr < Unit > )
    {
        assert ( false );
    }


    Archer::Archer()
    {}
    Archer::~Archer()
    {}
    int Archer::get_strength() const
    {
        return 1;
    }


    Infantryman::Infantryman()
    {}
    Infantryman::~Infantryman()
    {}
    int Infantryman::get_strength() const
    {
        return 2;
    }


    Horseman::Horseman()
    {}
    Horseman::~Horseman()
    {}
    int Horseman::get_strength() const
    {
        return 3;
    }


}
