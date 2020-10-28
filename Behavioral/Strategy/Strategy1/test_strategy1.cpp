#include "test_strategy1.h"

namespace Strategy1_ {

    void test_strategy1()
    {
        std::cout << "test_strategy1():\n";

        Strategy1_user su ( std::make_unique < Algorythm1 > () );
        su.execute();

        su.change_strategy ( std::make_unique < Algorythm2 > () );
        su.execute();

        su.change_strategy ( std::make_unique < Algorythm3 > () );
        su.execute();
    }





}
