#include <iostream>
#include <thread>

// patterns: state
#include "state/state.h"

void testState()
{
    Machine m;

    int i = 1;
    while ( i )
    {
        std::cout << "Enter i ( 0 or 1 or 2 ): ";
        std::cin >> i;

        if ( i == 1 )
            m.on();
        if ( i == 2 )
            m.off();

        m.execute();
    }

    std::cout << "\ntestState(): end\n";
}

int main()
{
    testState();
    std::cout << "main(): end\n";

    return 0;
}
