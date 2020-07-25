#include "hemlet.h"

Hemlet::Hemlet() : Hemlet_base { 20 }
{
}

Hemlet::~Hemlet()
{
}

void Hemlet::draw() const
{
    std::cout << "Hemlet(): structure is " << mStructure << '\n';
}
