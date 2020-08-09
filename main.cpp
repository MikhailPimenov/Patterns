#include <iostream>
#include <mutex>
#include <thread>

// patterns: state
#include "state/state.h"

Machine g_machine;
std::mutex g_mutex;
void execute ()
{
    int i = 0;
    while ( i < 100 )
    {
        std::unique_lock < std::mutex > ul ( g_mutex );
        g_machine.execute();
        ul.unlock();
        std::this_thread::sleep_for ( std::chrono::milliseconds ( 50 ) );
        ++i;
    }
}
void testState()
{
    std::thread t1 ( execute );

    int i = 1;
    while ( i )
    {
        std::unique_lock < std::mutex > ul ( g_mutex );
        std::cout << "Enter i ( 0 or 1 or 2 ): ";
        std::cin >> i;
        ul.unlock();

        if ( i == 1 )
            g_machine.on();
        if ( i == 2 )
            g_machine.off();

//        g_m.execute();
        std::this_thread::sleep_for ( std::chrono::milliseconds ( 500 ) );
    }
    t1.join();

    std::cout << "\ntestState(): end\n";
}

int main()
{
    testState();
    std::cout << "main(): end\n";

    return 0;
}
