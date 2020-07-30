#include "decorator.h"

Decorator::Decorator ( std::unique_ptr < I > interface )
    : mInterface { std::move ( interface ) }
{
}
Decorator::~Decorator()
{
    std::cout << "Decorator destroyed\n";
}

X::X ( std::unique_ptr < I > interface )
    : Decorator { std::move ( interface ) }
{
}
X::~X()
{
    std::cout << "X destroyed\n";
}
void X::doIt() const
{
    this->mInterface.get()->doIt();
    std::cout << 'X';
}

Y::Y ( std::unique_ptr < I > interface )
    : Decorator { std::move ( interface ) }
{
}
Y::~Y()
{
    std::cout << "Y destroyed\n";
}
void Y::doIt() const
{
    this->mInterface.get()->doIt();
    std::cout << 'Y';
}

Z::Z ( std::unique_ptr < I > interface )
    : Decorator { std::move ( interface ) }
{
}
Z::~Z()
{
    std::cout << "Z destroyed\n";
}
void Z::doIt() const
{
    this->mInterface.get()->doIt();
    std::cout << 'Z';
}
