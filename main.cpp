#include <iostream>

// patterns: template method
#include "templatemethod/base.h"

void testTemplateMethod()
{
    Derived1 d1;
    Derived2 d2;

    Base *methods[2] { &d1, &d2 };

    for ( int i = 0; i < 2; ++i )
        methods[i]->execute();

    std::cout << "\ntestTemplateMethod(): end\n";
}

int main()
{
    testTemplateMethod();
    std::cout << "main(): end\n";

    return 0;
}
