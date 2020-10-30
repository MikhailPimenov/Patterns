#include <iostream>

// patterns: visitor

#include "Behavioral/Visitor/Visitor1/test_visitor1.h"

int main()
{
    std::cout << "main(): start\n";

    Visitor1_::test_visitor1();

    std::cout << "main(): end\n";

    return 0;
}
