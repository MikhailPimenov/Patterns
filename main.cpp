#include <iostream>

// patterns: command

#include "Behavioral/Command/Command1/test_command1.h"

int main()
{
    std::cout << "main(): start\n";

    Command1_::test_command1();

    std::cout << "main(): end\n";

    return 0;
}
