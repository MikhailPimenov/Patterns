#include <iostream>

// patterns: strategy

#include "Behavioral/Strategy/Strategy1/test_strategy1.h"

int main()
{
    std::cout << "main(): start\n";

    Strategy1_::test_strategy1();

    std::cout << "main(): end\n";

    return 0;
}
