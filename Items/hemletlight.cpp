#include "hemletlight.h"

HemletLight::HemletLight() : Hemlet_base { 10 }
{
}

HemletLight::~HemletLight()
{
}

void HemletLight::draw() const
{
    std::cout << "HemletLight(): structure is " << mStructure << '\n';
}
