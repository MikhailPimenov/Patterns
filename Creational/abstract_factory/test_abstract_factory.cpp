#include "test_abstract_factory.h"


void f1 ( const AbstractFactory &factory )
{
    std::cout << "f1(): start\n";

    std::unique_ptr < Abstract_factory::Infantryman > infantryman = factory.create_infantryman();
    std::unique_ptr < Abstract_factory::Horseman >    horseman    = factory.create_horseman();
    std::unique_ptr < Abstract_factory::Archer >      archer      = factory.create_archer();

    infantryman.get()->info();
    horseman.get()->info();
    archer.get()->info();

    std::cout << "f1(): end\n";
}

void test_abstract_factory()
{
    std::cout << "===Pattern: abstract factory===\n\n";
    std::cout << "test_abstract_factory(): start\n";

    AbstractRomanFactory roman_factory;
    f1 ( roman_factory );


    AbstractCarthagenianFactory carthagenian_factory;
    f1 ( carthagenian_factory );


    std::cout << "test_abstract_factory(): end\n\n";
}

