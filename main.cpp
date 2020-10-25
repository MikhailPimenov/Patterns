#include <iostream>

// patterns: adapter

#include "Structural/Adapter/Adapter1/test_adapter1.h"

int main()
{
    std::cout << "main(): start\n";

    Adapter1_::test_adapter1();

    std::cout << "main(): end\n";

    return 0;
}
