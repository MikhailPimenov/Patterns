#include "observer1.h"

namespace Observer1_ {

    Subject::Subject ( int value )
        : m_value { value }
    {}
    Subject::~Subject()
    {}

    void Subject::attach ( Observer1 *observer )
    {
        this->m_viewers.push_back ( observer );
    }
    void Subject::set_value ( int value )
    {
        this->m_value = value;
        this->update();
    }
    int Subject::get_value() const
    {
        return this->m_value;
    }
    void Subject::update()
    {
        for ( auto &viewer : this->m_viewers )
            viewer->update();
    }


    Observer1::Observer1 ( Subject *subject )
        : m_subject { subject }, m_divisor { 1 }
    {
        this->m_subject->attach ( this );
    }
    Observer1::~Observer1()
    {}
    void Observer1::set_divisor ( int divisor )
    {
        this->m_divisor = divisor;
    }
    int Observer1::get_divisor() const
    {
        return this->m_divisor;
    }
    Subject *Observer1::get_subject() const
    {
        return this->m_subject;
    }


    Divisor_observer1::Divisor_observer1 ( Subject *subject )
        : Observer1 { subject }
    {}
    Divisor_observer1::~Divisor_observer1()
    {}
    void Divisor_observer1::update()
    {
        int value = this->get_subject()->get_value();
        int divisor = this->get_divisor();
        std::cout << value << '/'
                  << divisor << " = "
                  << value / divisor << '\n';
    }


    Module_observer1::Module_observer1 ( Subject *subject )
        : Observer1 { subject }
    {}
    Module_observer1::~Module_observer1()
    {}
    void Module_observer1::update()
    {
        int value = this->get_subject()->get_value();
        int divisor = this->get_divisor();
        std::cout << value << '%'
                  << divisor << " = "
                  << value % divisor << '\n';
    }

}
