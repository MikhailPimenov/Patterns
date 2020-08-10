#include <iostream>
#include <memory>

// patterns: visitor
#include "visitor1/visitor1.h"

void testVisitor()
{
    std::unique_ptr < Element1 > elements[3]
    {
        std::make_unique < Thiss > (),
        std::make_unique < That > (),
        std::make_unique < Another > (),
    };

    Up up;
    Down down;

    for ( int i = 0; i < 3; ++i )
    {
        elements[i].get()->accept ( up );
        elements[i].get()->accept ( down );
    }

    std::cout << "\ntestVisitor(): end\n";
}

int main()
{
    testVisitor();
    std::cout << "main(): end\n";

    return 0;
}
