#include <iostream>

// patterns: template method

#include "Behavioral/Template_method/Template_method1/test_template_method1.h"

int main()
{
    std::cout << "main(): start\n";

    Template_method1_::test_template_method1();

    std::cout << "main(): end\n";

    return 0;
}
