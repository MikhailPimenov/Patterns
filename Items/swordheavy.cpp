#include "swordheavy.h"

SwordHeavy::SwordHeavy()
    : Sword_base { 100 }
{
}

SwordHeavy::~SwordHeavy()
{
}

void SwordHeavy::draw() const
{
    std::cout << "SwordHeavy(): damage is " << mDamage << '\n';
}
