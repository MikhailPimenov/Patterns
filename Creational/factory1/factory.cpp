#include "factory.h"

FactoryWarrior::FactoryWarrior()
{}
FactoryWarrior::~FactoryWarrior()
{}

FactoryHorseman::FactoryHorseman()
{}
FactoryHorseman::~FactoryHorseman()
{}
std::unique_ptr < Warrior > FactoryHorseman::create_warrior() const
{
    return std::make_unique < Horseman > ();
}

FactoryInfantryman::FactoryInfantryman()
{}
FactoryInfantryman::~FactoryInfantryman()
{}
std::unique_ptr < Warrior > FactoryInfantryman::create_warrior() const
{
    return std::make_unique < Infantryman > ();
}

FactoryArcher::FactoryArcher()
{}
FactoryArcher::~FactoryArcher()
{}
std::unique_ptr < Warrior > FactoryArcher::create_warrior() const
{
    return std::make_unique < Archer > ();
}

