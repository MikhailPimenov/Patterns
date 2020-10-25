#include <iostream>

// patterns: facade

#include "Structural/Facade/Facade1/test_facade1.h"

int main()
{
    std::cout << "main(): start\n";

    Facade1_::test_facade1();

    std::cout << "main(): end\n";

    return 0;
}
