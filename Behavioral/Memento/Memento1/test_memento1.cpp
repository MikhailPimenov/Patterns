#include "test_memento1.h"

namespace Memento1_ {

    int Command::s_high_water = 0;
    int Command::s_number_commands = 0;

    Command *Command::s_command_list[20];
    Memento1 *Command::s_memento_list[20];


    void test_memento1()
    {
        std::cout << "test_memento1():\n";

        Number n ( 3 );

        Command half ( &n, &Number::half );
        Command dubble ( &n, &Number::dubble );

        Command *commands[2] = { &half, &dubble };



        int action = 5;

        std::cout << n.get_number() << '\n';
        while ( action ) {
            std::cout << "0 - exit, 1 - half, 2 - dubble, 3 - undo, 4 -redo:\n";

            std::cin >> action;

            if ( std::cin.fail() || action > 4 || action < 0 ) {
                std::cin.clear();
                std::cin.ignore ( 32756, '\n' );
                continue;
            }


            if ( action == 3 )
                Command::undo();
            else if ( action == 4 )
                Command::redo();
            else
                commands[action - 1]->execute();

            std::cout << n.get_number() << '\n';
        }

    }


}
