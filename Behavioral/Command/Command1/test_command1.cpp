#include "test_command1.h"

namespace Command1_ {

    void test_command1()
    {
        std::cout << "test_command1():\n";

        Game game;

        std::vector < std::unique_ptr < Command1 > > commands;
        commands.reserve ( 10 );
        commands.push_back ( std::make_unique < Start_game_command > ( &game ) );
        commands.push_back ( std::make_unique < Make_move_command > ( &game ) );
        commands.push_back ( std::make_unique < Make_move_command > ( &game ) );
        commands.push_back ( std::make_unique < Undo_move_command > ( &game ) );
        commands.push_back ( std::make_unique < Make_move_command > ( &game ) );
        commands.push_back ( std::make_unique < Save_game_command > ( &game ) );
        commands.push_back ( std::make_unique < Make_move_command > ( &game ) );
        commands.push_back ( std::make_unique < Make_move_command > ( &game ) );
        commands.push_back ( std::make_unique < Load_game_command > ( &game ) );
        commands.push_back ( std::make_unique < Make_move_command > ( &game ) );

        for ( auto &command : commands )
            command.get()->execute();

    }
}
