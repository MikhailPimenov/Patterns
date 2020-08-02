#include <iostream>
#include <vector>
#include <functional>
#include <memory>

// patterns: command
#include "command/commandbase.h"

void testCommand()
{
    ChessGame game;
    std::vector < std::unique_ptr < CommandBase > > v;
    v.push_back ( std::make_unique < CreateGameCommand > ( &game ) );
    v.push_back ( std::make_unique < MakeMoveCommand > ( &game ) );
    v.push_back ( std::make_unique < MakeMoveCommand > ( &game ) );
    v.push_back ( std::make_unique < LoadGameCommand > ( &game ) );
    v.push_back ( std::make_unique < MakeMoveCommand > ( &game ) );
    v.push_back ( std::make_unique < UndoMoveCommand > ( &game ) );
    v.push_back ( std::make_unique < MakeMoveCommand > ( &game ) );
    v.push_back ( std::make_unique < SaveGameCommand > ( &game ) );

    for ( const auto &command : v )
        command.get()->execute();

    std::cout << "\ntestCommand(): end\n";
}

int main()
{
    testCommand();
    std::cout << "main(): end\n";
    return 0;
}
