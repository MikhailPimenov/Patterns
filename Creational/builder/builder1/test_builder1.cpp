#include "test_builder1.h"



void test_builder1()
{
    std::cout << "===Pattern: builder===\n\n";
    std::cout << "test_builder1(): start\n";


    Director director;
    RomanArmyBuilder1 builder1;
    CarthagenianArmyBuilder1 builder2;

    std::shared_ptr < Builder1_::Army > army1 = director.build ( builder1 );
    std::shared_ptr < Builder1_::Army > army2 = director.build ( builder2 );

    std::cout << "Roman army:\n";
    army1.get()->info();
    std::cout << "Carthagenian army:\n";
    army2.get()->info();

    std::cout << "test_builder1(): end\n\n";
}
