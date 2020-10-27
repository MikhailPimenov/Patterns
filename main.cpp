#include <iostream>

// patterns: observer

#include "Behavioral/Observer/Observer1/test_observer1.h"

int main()
{
    std::cout << "main(): start\n";

    Observer1_::test_observer1();

    std::cout << "main(): end\n";

    return 0;
}
