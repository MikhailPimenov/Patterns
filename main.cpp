#include <iostream>
#include <memory>

// patterns: chain of responsibility
#include "chainofresponsibility/handlerbase.h"

void testChainOfResponsibility()
{
    std::shared_ptr < Handler1 > h1 ( std::make_shared < Handler1 > () );
    std::shared_ptr < Handler2 > h2 ( std::make_shared < Handler2 > () );
    std::shared_ptr < Handler3 > h3 ( std::make_shared < Handler3 > () );
    std::shared_ptr < Handler4 > h4 ( std::make_shared < Handler4 > () );

    h1.get()->add ( h2 );
    h1.get()->add ( h3 );
    h1.get()->add ( h4 );
    h4.get()->setHandlerNext ( h1 );

    srand ( 0u );
    for ( int i = 0; i < 10; ++i )
    {
        h1->handle ( i );
    }

    std::cout << "\ntestChainOfResponsibility(): end\n";
}

int main()
{
    testChainOfResponsibility();
    std::cout << "main(): end\n";
    return 0;
}
