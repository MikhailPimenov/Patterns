#include "a.h"

Aonly::Aonly()
{
}
Aonly::~Aonly()
{
}
void Aonly::doIt() const
{
    std::cout << 'A';
}

AwithX::AwithX()
{
}
AwithX::~AwithX()
{
}
void AwithX::doIt() const
{
    Aonly::doIt();
    std::cout << 'X';
}

AwithXY::AwithXY()
{
}
AwithXY::~AwithXY()
{
}
void AwithXY::doIt() const
{
    AwithX::doIt();
    std::cout << 'Y';
}

AwithXYZ::AwithXYZ()
{
}
AwithXYZ::~AwithXYZ()
{
}
void AwithXYZ::doIt() const
{
    AwithXY::doIt();
    std::cout << 'Z';
}
