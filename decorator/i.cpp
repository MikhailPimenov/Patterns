#include "i.h"

I::I()
{
}
I::~I()
{
    std::cout << "I destroyed\n";
}

A::A()
{
}
A::~A()
{
    std::cout << "A destroyed\n";
}
void A::doIt() const
{
    std::cout << 'A';
}

