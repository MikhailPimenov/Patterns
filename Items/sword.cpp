#include "sword.h"

Sword::Sword() : Sword_base { 60 }
{
}

Sword::~Sword()
{
}

void Sword::draw() const
{
    std::cout << "Sword(): damage is " << mDamage << '\n';
}
