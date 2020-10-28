#include "test_state1.h"

namespace State1_ {

    void test_state1()
    {
        void ( Machine:: *states[3] ) () = { &Machine::off, &Machine::schrodinger_state, &Machine::on };

        Machine m;
        m.set_current ( new Schrodinger_state );

        int number = 0;
        while ( true ) {
            std::cout << "Enter 0 or 1 or 2. Enter 3 to exit\n";
            std::cin >> number;

            if ( number == 3 )
                break;

            ( m.*states[number] ) ();
        }
    }

}
