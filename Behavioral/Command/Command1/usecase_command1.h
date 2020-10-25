#ifndef USECASE_COMMAND1_H
#define USECASE_COMMAND1_H

#include <iostream>

namespace Command1_ {

    class Game
    {
    public:
        Game();
        virtual ~Game();

        void start_game();
        void save_game ( const std::string &file_name );
        void load_game ( const std::string &file_name );
        void make_move ( const std::string &move );
        void undo_move ( const std::string &file_name );
    };

}
#endif // USECASE_COMMAND1_H
