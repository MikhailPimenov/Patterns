#include "test_object_pool1.h"

namespace Object_Pool1_ {

    void test_object_pool1()
    {
        std::cout << "test_object_pool1(): start\n";

        std::cout << "Creating pool\n";
        Object_Pool1 &pool = Object_Pool1::get_instance();

        std::unique_ptr < Resource > r1 ( pool.get_resource() );
        r1.get()->set_value ( 14 );
        std::cout << "resource1: " << r1.get()->get_value() << '\n';

        std::unique_ptr < Resource > r2 ( pool.get_resource() );
        r2.get()->set_value ( 89 );
        std::cout << "resource2: " << r2.get()->get_value() << '\n';

        pool.return_resource ( std::move ( r1 ) );

        std::unique_ptr < Resource > r3 ( pool.get_resource() );
        std::cout << "resource3: " << r3.get()->get_value() << '\n';



        std::cout << "test_object_pool1(): end\n";
    }
}
