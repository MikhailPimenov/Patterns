#include "base.h"

Base::Base()
{}
Base::~Base()
{}
void Base::a()
{
    std::cout << "a ";
}
void Base::c()
{
    std::cout << "c ";
}
void Base::e()
{
    std::cout << "e ";
}
void Base::execute()
{
    a();
    phase1();
    c();
    phase2();
    e();
    std::cout << '\n';
}

Derived1::Derived1()
{}
Derived1::~Derived1()
{}
void Derived1::phase1()
{
    std::cout << "b ";
}
void Derived1::phase2()
{
    std::cout << "d ";
}

Derived2::Derived2()
{}
Derived2::~Derived2()
{}
void Derived2::phase1()
{
    std::cout << "2 ";
}
void Derived2::phase2()
{
    std::cout << "4 ";
}
