#include "usecase_observer1.h"

namespace Observer1_ {

    No_observer_divisor::No_observer_divisor ( int divisor )
        : m_divisor { divisor }
    {}
    No_observer_divisor::~No_observer_divisor()
    {}

    void No_observer_divisor::update ( int value )
    {
        std::cout << value << '/'
                  << this->m_divisor << " = "
                  << value / ( this->m_divisor ) << '\n';
    }
    int No_observer_divisor::get_divisor() const
    {
        return this->m_divisor;
    }
    void No_observer_divisor::set_divisor ( int divisor )
    {
        this->m_divisor = divisor;
    }


    No_observer_module::No_observer_module ( int divisor )
        : m_divisor { divisor }
    {}
    No_observer_module::~No_observer_module()
    {}

    void No_observer_module::update ( int value )
    {
        std::cout << value << '%'
                  << this->m_divisor << " = "
                  << value % ( this->m_divisor ) << '\n';
    }
    int No_observer_module::get_divisor() const
    {
        return this->m_divisor;
    }
    void No_observer_module::set_divisor ( int divisor )
    {
        this->m_divisor = divisor;
    }





    No_observer_subject::No_observer_subject ( int value )
        : m_divisor { 3 }, m_module { 3 }, m_value { value }
    {}
    No_observer_subject::~No_observer_subject()
    {}
    int No_observer_subject::get_value() const
    {
        return this->m_value;
    }
    void No_observer_subject::set_value ( int value )
    {
        this->m_value = value;
        this->m_divisor.update ( value );
        this->m_module.update ( value );
    }
    int No_observer_subject::get_divisor() const
    {
        return this->m_divisor.get_divisor();
    }
    void No_observer_subject::set_divisor ( int divisor )
    {
        this->m_divisor.set_divisor ( divisor );
        this->m_module.set_divisor ( divisor );
    }


}
