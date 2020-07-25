#include "swordlight.h"

SwordLight::SwordLight() : Sword_base { 30 }
{
}

SwordLight::~SwordLight()
{
}

void SwordLight::draw() const
{
    std::cout << "SwordLight(): damage is " << mDamage << '\n';
}
