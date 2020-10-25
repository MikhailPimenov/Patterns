#include "test_bridge1.h"

namespace Bridge1_ {
    void test_bridge1()
    {

        Console_logger cl;
        cl.log ( "First message" );

        Socket_logger sl ( "superhost", 228 );
        sl.log ( "Second message" );
    }

}
