#include "test_prototype2.h"

namespace Prototype2_ {

    Circle Circle::s_prototype = Circle ( Dummy() );
    Triangle Triangle::s_prototype = Triangle ( Dummy() );

    void test_prototype2()
    {
        std::cout << "test_prototype2(): start\n";

        Figure *f[4] {
            Figure::create_prototype ( Key_t::CIRCLE ),
            Figure::create_prototype ( Key_t::TRIANGLE ),
            Figure::create_prototype ( Key_t::TRIANGLE ),
            Figure::create_prototype ( Key_t::TRIANGLE ),
        };


        for ( int i = 0; i < 4; ++i )
            if ( f[i] )
                f[i]->print_info();

        for ( int i = 0; i < 4; ++i )
            if ( f[i] )
                delete f[i];

        std::cout << "test_prototype2(): end\n";
    }

}
