#include "composite1.h"

namespace Composite1_ {

    Composite::Composite()
    {}
    Composite::~Composite()
    {}

    void Composite::add_unit ( std::unique_ptr<Unit> unit )
    {
        this->m_units.push_back ( std::move ( unit ) );
    }
    int Composite::get_strength() const
    {
        int strength { 0 };
        for ( const auto &element : this->m_units )
            strength += element.get()->get_strength();

        return strength;
    }



    std::unique_ptr < Unit > create_legion()
    {
        std::unique_ptr < Unit > legion ( std::make_unique < Composite >() );

        for ( int counter = 0; counter < 3000; ++counter )
            legion.get()->add_unit ( std::make_unique < Infantryman >() );
        for ( int counter = 0; counter < 1200; ++counter )
            legion.get()->add_unit ( std::make_unique < Archer >() );
        for ( int counter = 0; counter < 200; ++counter )
            legion.get()->add_unit ( std::make_unique < Horseman >() );

        return legion;
    }
}
