#include "usecase_decorator1.h"

namespace Decorator1_ {

    I::I()
    {
        std::cout << "I acquired\n";
    }
    I::~I()
    {
        std::cout << "I destroyed\n";
    }

    A::A()
    {
        std::cout << "A acquired\n";
    }
    A::~A()
    {
        std::cout << "A destroyed\n";
    }
    void A::do_it() const
    {
        std::cout << 'A';
    }



}
