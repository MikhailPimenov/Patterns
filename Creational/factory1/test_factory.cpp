#include "test_factory.h"

void warrior_function ( const FactoryWarrior &factory )
{
    std::cout << "warrior_function() start:\n";

    std::unique_ptr < Factory_::Warrior > warrior = factory.create_warrior();
    warrior.get()->info();

    std::cout << "warrior_function() end:\n";
}

void test_factory()
{
    std::cout << "===Pattern: factory===\n\n";
    std::cout << "test_factory(): start\n";

    FactoryArcher archer;
    FactoryHorseman horseman;
    FactoryInfantryman infantryman;

    warrior_function ( archer );
    warrior_function ( horseman );
    warrior_function ( infantryman );

    std::cout << "test_factory(): end\n\n";
}

