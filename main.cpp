#include <iostream>
#include <map>
#include <memory>
#include <vector>

// patterns: bridge
#include "Logger/logger.h"


void testBridge()
{
    std::unique_ptr < Logger > logger1 ( std::make_unique < FileLogger > ( "file1" ) );
    logger1.get()->log ( "first message" );


    std::unique_ptr < Logger > logger2 ( std::make_unique < SocketLogger > ( "host1", "port1" ) );
    logger2.get()->log ( "second message" );


    std::unique_ptr < Logger > logger3 ( std::make_unique < ConsoleLogger > () );
    logger3.get()->log ( "third message" );

    std::cout << "testBridge(): end\n";
}

int main()
{
    testBridge();
    std::cout << "main(): end\n";
    return 0;
}
