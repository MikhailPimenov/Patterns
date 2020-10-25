#include "decorator1.h"


namespace Decorator1_ {

    D::D ( I *wrappee )
        : m_wrappee { wrappee }
    {
        std::cout << "D acquired\n";
    }
    D::~D()
    {
        if ( this->m_wrappee )
            delete m_wrappee;
        std::cout << "D destroyed\n";
    }
    void D::do_it() const
    {
        this->m_wrappee->do_it();
    }


    X::X ( I *wrappee )
        : D { wrappee }
    {
        std::cout << "X acquired\n";
    }
    X::~X()
    {
        std::cout << "X destroyed\n";
    }
    void X::do_it() const
    {
        D::do_it();
        std::cout << 'X';
    }


    W::W ( I *wrappee )
        : D { wrappee }
    {
        std::cout << "W acquired\n";
    }
    W::~W()
    {
        std::cout << "W destroyed\n";
    }
    void W::do_it() const
    {
        D::do_it();
        std::cout << 'W';
    }


    Y::Y ( I *wrappee )
        : D { wrappee }
    {
        std::cout << "Y acquired\n";
    }
    Y::~Y()
    {
        std::cout << "Y destroyed\n";
    }
    void Y::do_it() const
    {
        D::do_it();
        std::cout << 'Y';
    }


    Z::Z ( I *wrappee )
        : D { wrappee }
    {
        std::cout << "Z acquired\n";
    }
    Z::~Z()
    {
        std::cout << "Z destroyed\n";
    }
    void Z::do_it() const
    {
        D::do_it();
        std::cout << 'Z';
    }



}
