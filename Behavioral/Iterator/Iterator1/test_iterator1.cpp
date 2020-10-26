#include "test_iterator1.h"


namespace Iterator1_ {

    bool operator== ( const Stack &s1, const Stack &s2 )
    {
        Iterator1 i1 ( &s1 );
        Iterator1 i2 ( &s2 );

        for ( i1.first(), i2.first(); ( !i1.is_done() ) && ( !i2.is_done() ); i1.next(), i2.next() ) {
            if ( i1.item() != i2.item() )
                return false;
        }

        return i1.is_done() && i2.is_done();
    }
    void test_iterator1()
    {
        std::cout << "test_iterator1():\n";

        Stack s1;
        Stack s2;

        s1.push_back ( 1 );
        s1.push_back ( 2 );
        s1.push_back ( 3 );

        s2.push_back ( 1 );
        s2.push_back ( 2 );
        s2.push_back ( 3 );

        std::cout << "s1 == s2: " << std::boolalpha << ( s1 == s2 ) << '\n';

        s2.push_back ( 1 );
        std::cout << "s1 == s2: " << std::boolalpha << ( s1 == s2 ) << '\n';

    }

}
