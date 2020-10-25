#include "flyweight1.h"

namespace Flyweight1_ {

    Flyweight1::Flyweight1 ( int first_value )
        : m_first_value { first_value }
    {
        std::cout << "Flyweight acquired\n";
    }
    Flyweight1::~Flyweight1()
    {
        std::cout << "Flyweight destroyed\n";
    }

    void Flyweight1::report ( int second_value ) const
    {
        std::cout << this->m_first_value << second_value << ' ';
    }

    Factory::Factory()
    {}
    Factory::~Factory()
    {}

    Flyweight1 **Factory::get_pool()
    {
        static Flyweight1 **pool = nullptr;

        if ( ! pool ) {
            pool = new Flyweight1*[static_cast < unsigned > ( Flyweight1::s_x )];
            for ( int i = 0; i < Flyweight1::s_x; ++i )
                pool[i] = nullptr;
        }

        return pool;
    }
    Flyweight1 *Factory::get_flyweight ( int first_value )
    {
        assert ( first_value >= 0 && first_value < Flyweight1::s_x );

        Flyweight1 **pool = Factory::get_pool();

        if ( ! pool[first_value] )
            pool[first_value] = new Flyweight1 ( first_value );

        return pool[first_value];
    }

    void Factory::clean_pool()
    {
        Flyweight1 **pool = Factory::get_pool();

        for ( int i = 0; i < Flyweight1::s_x; ++i )
            if ( pool[i] )
                delete pool[i];

        delete [] pool;
    }
}
