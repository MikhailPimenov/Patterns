#include "test_chain_of_responsibility1.h"


namespace Chain_of_responsibility1_ {

    void test_chain_of_responsibility1()
    {
        srand ( 0u );

        Handler1 entry_h1;
        Handler2 h2;
        Handler3 h3;
        Handler4 h4;

        entry_h1.add ( &h2 );
        entry_h1.add ( &h3 );
        entry_h1.add ( &h4 );
        h4.set_next ( &entry_h1 );

        for ( int request = 0; request < 5; ++request )
            entry_h1.handle ( request );

    }

}
