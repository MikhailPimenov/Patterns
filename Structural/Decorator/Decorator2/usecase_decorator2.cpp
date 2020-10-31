#include "usecase_decorator2.h"
namespace Decorator2_ {

    I::I()
    {}
    I::~I()
    {}

    A::A()
    {}
    A::~A()
    {}
    void A::count_me()
    {
        static int count { 0 };
        std::cout << "I am the original function: ";
        std::cout << ( ++count ) << '\n';
    }

}
