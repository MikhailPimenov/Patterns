#include <iostream>

// patterns: iterator
#include "iterator/stack.h"


void testIterator()
{
    Stack s1;
    s1.push ( 1 );
    s1.push ( 2 );
    s1.push ( 3 );
    s1.push ( 4 );
    s1.push ( 5 );

    Stack s2 ( s1 ), s3 ( s1 ), s4 ( s1 );
    s3.pop();
    s4.push ( 666 );
    s4.push ( 777 );

    std::cout << std::boolalpha;
    std::cout << "s1 == s2 : " << ( s1 == s2 ) << '\n';
    std::cout << "s1 == s3 : " << ( s1 == s3 ) << '\n';
    std::cout << "s1 == s4 : " << ( s1 == s4 ) << '\n';

    std::cout << "\ntestIterator(): end\n";
}

int main()
{
    testIterator();
    std::cout << "main(): end\n";
    return 0;
}
