#include "test_facade1.h"

namespace Facade1_ {


    void test_facade1()
    {
        std::cout << "No facade:\n";

        bool ready = false;
        Red_balls rb;
        Green_balls gb;
        Blue_balls bb;
        Yellow_balls yb;

        for ( int i = 0; i < 30; ++i ) {
            rb.increase_counter();
        }
        for ( int i = 0; i < 30; ++i ) {
            gb.increase_counter();
        }
        for ( int i = 0; i < 30; ++i ) {
            bb.increase_counter();
        }
        for ( int i = 0; i < 30; ++i ) {
            yb.increase_counter();
        }



        ready = rb && gb && bb && yb;
        std::cout << std::boolalpha << "ready: " << ready << '\n';


        std::cout << "Facade:\n";

        Facade f;
        for ( int i = 0; i < 120; ++i )
            f.increase_counter();

        ready = f.get_state();
        std::cout << std::boolalpha << "ready: " << ready << '\n';
    }
}
