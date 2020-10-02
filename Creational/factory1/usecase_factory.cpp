#include "usecase_factory.h"


namespace Factory_ {


    Warrior::Warrior()
    {}
    Warrior::~Warrior()
    {}

    Horseman::Horseman()
    {}
    Horseman::~Horseman()
    {}
    void Horseman::info() const
    {
        std::cout << "Horseman\n";
    }

    Infantryman::Infantryman()
    {}
    Infantryman::~Infantryman()
    {}
    void Infantryman::info() const
    {
        std::cout << "Infantryman\n";
    }

    Archer::Archer()
    {}
    Archer::~Archer()
    {}
    void Archer::info() const
    {
        std::cout << "Archer\n";
    }
};
