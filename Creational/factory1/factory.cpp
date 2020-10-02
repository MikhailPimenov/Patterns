#include "factory.h"

FactoryWarrior::FactoryWarrior()
{}
FactoryWarrior::~FactoryWarrior()
{}

FactoryHorseman::FactoryHorseman()
{}
FactoryHorseman::~FactoryHorseman()
{}
std::unique_ptr < Factory_::Warrior > FactoryHorseman::create_warrior() const
{
    return std::make_unique < Factory_::Horseman > ();
}

FactoryInfantryman::FactoryInfantryman()
{}
FactoryInfantryman::~FactoryInfantryman()
{}
std::unique_ptr < Factory_::Warrior > FactoryInfantryman::create_warrior() const
{
    return std::make_unique < Factory_::Infantryman > ();
}

FactoryArcher::FactoryArcher()
{}
FactoryArcher::~FactoryArcher()
{}
std::unique_ptr < Factory_::Warrior > FactoryArcher::create_warrior() const
{
    return std::make_unique < Factory_::Archer > ();
}

