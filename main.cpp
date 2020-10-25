#include <iostream>

// patterns: proxy

#include "Structural/Proxy/Proxy1/test_proxy1.h"
#include "Structural/Proxy/Proxy2/test_proxy2.h"

int main()
{
    std::cout << "main(): start\n";

    Proxy1_::test_proxy1();
    std::cout << std::endl << std::endl << std::endl;
    Proxy2_::test_proxy2();

    std::cout << "main(): end\n";

    return 0;
}
