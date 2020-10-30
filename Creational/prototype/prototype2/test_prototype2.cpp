#include "test_prototype2.h"
namespace Prototype2_ {


    Circle Circle::s_prototype = Circle ( Dummy() );
    Triangle Triangle::s_prototype = Triangle ( Dummy() );

    void test_prototype2()
    {
        std::cout << "test_prototype2():\n";

        Figure *f[2] {
            Figure::get_prototype ( Keys_t::TRIANGLE ),
            Figure::get_prototype ( Keys_t::CIRCLE )
        };


        for ( int i = 0; i < 2; ++i )
            f[i]->print_info();



    }

}
