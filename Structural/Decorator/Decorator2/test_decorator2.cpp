#include "test_decorator2.h"
namespace Decorator2_ {

    void test_decorator2()
    {
        std::cout << "test_decorator2():\n";

        std::unique_ptr < I > d (
            std::make_unique < Counter > ( std::make_unique < A > () ) );


        d.get()->count_me();
        d.get()->count_me();
        d.get()->count_me();
        d.get()->count_me();
    }
}
