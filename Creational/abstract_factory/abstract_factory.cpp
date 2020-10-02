#include "abstract_factory.h"

AbstractFactory::AbstractFactory()
{}
AbstractFactory::~AbstractFactory()
{}


AbstractRomanFactory::AbstractRomanFactory()
{}
AbstractRomanFactory::~AbstractRomanFactory()
{}
std::unique_ptr < Abstract_factory::Infantryman > AbstractRomanFactory::create_infantryman() const
{
    return std::make_unique < Abstract_factory::RomanInfantryman > ();
}
std::unique_ptr < Abstract_factory::Horseman > AbstractRomanFactory::create_horseman() const
{
    return std::make_unique < Abstract_factory::RomanHorseman > ();
}
std::unique_ptr < Abstract_factory::Archer > AbstractRomanFactory::create_archer() const
{
    return std::make_unique < Abstract_factory::RomanArcher > ();
}


AbstractCarthagenianFactory::AbstractCarthagenianFactory()
{}
AbstractCarthagenianFactory::~AbstractCarthagenianFactory()
{}
std::unique_ptr < Abstract_factory::Infantryman > AbstractCarthagenianFactory::create_infantryman() const
{
    return std::make_unique < Abstract_factory::CarthagenianInfantryman > ();
}
std::unique_ptr < Abstract_factory::Horseman > AbstractCarthagenianFactory::create_horseman() const
{
    return std::make_unique < Abstract_factory::CarthagenianHorseman > ();
}
std::unique_ptr < Abstract_factory::Archer > AbstractCarthagenianFactory::create_archer() const
{
    return std::make_unique < Abstract_factory::CarthagenianArcher > ();
}

