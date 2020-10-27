#include "test_observer1.h"

namespace Observer1_ {

    void no_observer1_test()
    {
        std::cout << "No observer:\n";

        No_observer_subject subject ( 14 );
        subject.set_divisor ( 3 );

        subject.set_value ( 13 );
        subject.set_value ( 14 );
    }

    void observer1_test()
    {
        std::cout << "Observer:\n";

        Subject subject ( 14 );
        Divisor_observer1 d1 ( &subject );
        Divisor_observer1 d2 ( &subject );
        Module_observer1 m1 ( &subject );
        Module_observer1 m2 ( &subject );

        d1.set_divisor ( 3 );
        d2.set_divisor ( 4 );
        m1.set_divisor ( 3 );
        m2.set_divisor ( 4 );

        subject.set_value ( 13 );
        subject.set_value ( 14 );
        subject.set_value ( 15 );
    }

    void test_observer1()
    {
        no_observer1_test();
        std::cout << std::endl << std::endl;
        observer1_test();
    }


}
