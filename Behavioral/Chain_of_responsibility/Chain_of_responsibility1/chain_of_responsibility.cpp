#include "chain_of_responsibility.h"


namespace Chain_of_responsibility1_ {

    Base_handler::Base_handler()
        : m_next { nullptr }
    {}
    Base_handler::~Base_handler()
    {}
    void Base_handler::set_next ( Base_handler *next )
    {
        this->m_next = next;
    }
    void Base_handler::add ( Base_handler *next )
    {
        if ( this->m_next )
            this->m_next->add ( next );
        else
            this->m_next = next;
    }
    void Base_handler::handle ( int request ) const
    {
        if ( this->m_next )
            this->m_next->handle ( request );
    }


    Handler1::Handler1()
    {}
    Handler1::~Handler1()
    {}
    void Handler1::handle ( int request ) const
    {
        if ( rand() % 4 ) {
            std::cout << "H1 passed   ";
            this->Base_handler::handle ( request );
        } else
            std::cout << "H1 handled\n";
    }


    Handler2::Handler2()
    {}
    Handler2::~Handler2()
    {}
    void Handler2::handle ( int request ) const
    {
        if ( rand() % 4 ) {
            std::cout << "H2 passed   ";
            this->Base_handler::handle ( request );
        } else
            std::cout << "H2 handled\n";
    }


    Handler3::Handler3()
    {}
    Handler3::~Handler3()
    {}
    void Handler3::handle ( int request ) const
    {
        if ( rand() % 4 ) {
            std::cout << "H3 passed   ";
            this->Base_handler::handle ( request );
        } else
            std::cout << "H3 handled\n";
    }


    Handler4::Handler4()
    {}
    Handler4::~Handler4()
    {}
    void Handler4::handle ( int request ) const
    {
        if ( rand() % 4 ) {
            std::cout << "H4 passed   ";
            this->Base_handler::handle ( request );
        } else
            std::cout << "H4 handled\n";
    }




}
