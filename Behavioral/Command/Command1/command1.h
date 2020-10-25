#ifndef COMMAND1_H
#define COMMAND1_H

#include <iostream>

#include "usecase_command1.h"

namespace Command1_ {

    class Command1
    {
    protected:
        std::string m_temp_file;
        Game *m_object;

    protected:
        Command1 ( Game *object );
    public:
        virtual ~Command1();


        virtual void execute() = 0;
    };

//void get_user_input(const std::string &promt, std::string &out);


    class Save_game_command : public Command1
    {
    public:
        Save_game_command ( Game *object );
        virtual ~Save_game_command() override;


        virtual void execute() override;
    };

    class Load_game_command : public Command1
    {
    public:
        Load_game_command ( Game *object );
        virtual ~Load_game_command() override;


        virtual void execute() override;
    };

    class Start_game_command : public Command1
    {
    public:
        Start_game_command ( Game *object );
        virtual ~Start_game_command() override;


        virtual void execute() override;
    };

    class Make_move_command : public Command1
    {
    public:
        Make_move_command ( Game *object );
        virtual ~Make_move_command() override;


        virtual void execute() override;
    };

    class Undo_move_command : public Command1
    {
    public:
        Undo_move_command ( Game *object );
        virtual ~Undo_move_command() override;


        virtual void execute() override;
    };




}

#endif // COMMAND1_H
