#include "usecase_abstract_factory.h"

namespace Abstract_factory {
    Warrior::Warrior() {}
    Warrior::~Warrior() {}

    Horseman::Horseman() {}
    Horseman::~Horseman() {}

    Infantryman::Infantryman() {}
    Infantryman::~Infantryman() {}

    Archer::Archer() {}
    Archer::~Archer() {}

    RomanInfantryman::RomanInfantryman() {}
    RomanInfantryman::~RomanInfantryman() {}
    void RomanInfantryman::info() const
    {
        std::cout << "Roman infantryman\n";
    }

    RomanArcher::RomanArcher() {}
    RomanArcher::~RomanArcher() {}
    void RomanArcher::info() const
    {
        std::cout << "Roman archer\n";
    }

    RomanHorseman::RomanHorseman() {}
    RomanHorseman::~RomanHorseman() {}
    void RomanHorseman::info() const
    {
        std::cout << "Roman horseman\n";
    }


    CarthagenianInfantryman::CarthagenianInfantryman() {}
    CarthagenianInfantryman::~CarthagenianInfantryman() {}
    void CarthagenianInfantryman::info() const
    {
        std::cout << "Carthagenian infantryman\n";
    }

    CarthagenianArcher::CarthagenianArcher() {}
    CarthagenianArcher::~CarthagenianArcher() {}
    void CarthagenianArcher::info() const
    {
        std::cout << "Carthagenian archer\n";
    }

    CarthagenianHorseman::CarthagenianHorseman() {}
    CarthagenianHorseman::~CarthagenianHorseman() {}
    void CarthagenianHorseman::info() const
    {
        std::cout << "Carthagenian horseman\n";
    }

}
