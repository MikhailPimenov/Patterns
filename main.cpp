#include <iostream>

// patterns: memento
#include "memento/number.h"

int Command::s_current = 0;
int Command::s_max = 0;
std::shared_ptr < Command > Command::s_commands[200];
std::shared_ptr < Memento > Command::s_mementos[200];

void testMemento()
{
    int i = 0;
    std::cout << "Integer: ";
    std::cin >> i;
    std::shared_ptr < Number > object ( std::make_shared < Number > ( i ) );

    std::unique_ptr < Command > commands[3];
    commands[1] = std::make_unique < Command > ( object, &Number::dubble );
    commands[2] = std::make_unique < Command > ( object, &Number::half );

    std::cout << "Exit[0], Double[1], Half[2], Undo[3], Redo[4]: ";
    std::cin >> i;

    // no user input check
    while (i)
    {
        if (i == 3)
            Command::undo();
        else if (i == 4)
            Command::redo();
        else
            commands[i]->execute();
        std::cout << "   " << object->getValue() << std::endl;
        std::cout << "Exit[0], Double[1], Half[2], Undo[3], Redo[4]: ";
        std::cin >> i;
    }
    std::cout << "\ntestMemento(): end\n";
}

int main()
{
   testMemento();
   std::cout << "main(): end\n";


    return 0;
}
