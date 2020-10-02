#include "test_singleton.h"

void test_singleton()
{
    std::cout << "===Pattern: singleton===\n\n";
    std::cout << "test_singleton(): start\n";
    Singleton &a = Singleton::get_instance();

    Singleton &b = Singleton::get_instance();

    Singleton &c = Singleton::get_instance();

    std::cout << &a << '\n';
    std::cout << &b << '\n';
    std::cout << &c << '\n';

    std::cout << "test_singleton(): end\n\n";
}
