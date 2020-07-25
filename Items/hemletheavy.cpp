#include "hemletheavy.h"

HemletHeavy::HemletHeavy() : Hemlet_base { 50 }
{
}

HemletHeavy::~HemletHeavy()
{
}

void HemletHeavy::draw() const
{
    std::cout << "HemletHeavy(): structure is " << mStructure << '\n';
}
