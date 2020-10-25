#include "usecase_command1.h"

namespace Command1_ {

    Game::Game()
    {}
    Game::~Game()
    {}

    void Game::save_game ( const std::string &file_name )
    {
        std::cout << "Game saved in file \" " << file_name << " \"\n";
    }
    void Game::load_game ( const std::string &file_name )
    {
        std::cout << "Game loaded from file \" " << file_name << " \"\n";
    }
    void Game::start_game()
    {
        std::cout << "Game_started\n";
    }
    void Game::make_move ( const std::string &move )
    {
        std::cout << "Move \" " << move << " \" is made\n";
    }
    void Game::undo_move ( const std::string & )
    {
        std::cout << "Last move canceled\n";
    }

}
