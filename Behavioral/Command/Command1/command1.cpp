#include "command1.h"

namespace Command1_ {

    Command1::Command1 ( Game *object )
        : m_temp_file { "TEMP_FILE" }, m_object { object }
    {}
    Command1::~Command1()
    {}

    void get_user_input ( const std::string &promt, std::string &out )
    {
        std::cout << promt;
        std::cin >> out;
    }


    Save_game_command::Save_game_command ( Game *object )
        : Command1 { object }
    {}
    Save_game_command::~Save_game_command()
    {}

    void Save_game_command::execute()
    {
        std::string file_name;
        get_user_input ( "Enter file name:\n", file_name );
        this->m_object->save_game ( file_name );
    }


    Load_game_command::Load_game_command ( Game *object )
        : Command1 { object }
    {}
    Load_game_command::~Load_game_command()
    {}

    void Load_game_command::execute()
    {
        std::string file_name;
        get_user_input ( "Enter file name:\n", file_name );
        this->m_object->load_game ( file_name );
    }


    Start_game_command::Start_game_command ( Game *object )
        : Command1 { object }
    {}
    Start_game_command::~Start_game_command()
    {}

    void Start_game_command::execute()
    {
        this->m_object->start_game();
    }


    Make_move_command::Make_move_command ( Game *object )
        : Command1 { object }
    {}
    Make_move_command::~Make_move_command()
    {}

    void Make_move_command::execute()
    {
        std::string move;
        get_user_input ( "Enter your move:\n", move );
        this->m_object->make_move ( move );
        this->m_object->save_game ( this->m_temp_file );
    }


    Undo_move_command::Undo_move_command ( Game *object )
        : Command1 { object }
    {}
    Undo_move_command::~Undo_move_command()
    {}

    void Undo_move_command::execute()
    {
        this->m_object->undo_move ( m_temp_file );
    }

}
