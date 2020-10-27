#include "memento1.h"

namespace Memento1_ {

    Number::Number ( int value )
        : m_value { value }
    {}
    Number::~Number()
    {}

    int Number::get_number() const
    {
        return this->m_value;
    }

    void Number::dubble()
    {
        this->m_value *= 2;
    }
    void Number::half()
    {
        this->m_value /= 2;
    }



    Memento1 *Number::create_memento()
    {
        return new Memento1 ( this->m_value );
    }
    void Number::reinstate_memento ( Memento1 *memento )
    {
        this->m_value = memento->m_state;
    }



    Memento1::Memento1 ( int state )
        : m_state { state }
    {}
    Memento1::~Memento1()
    {}


    Command::Command ( Number *reciever, Action action )
        : m_reciever { reciever }, m_action { action }
    {}

    Command::~Command()
    {}

    void Command::execute()
    {
        s_memento_list[s_number_commands] = this->m_reciever->create_memento();
        s_command_list[s_number_commands] = this;

        if ( s_number_commands > s_high_water )
            s_high_water = s_number_commands;

        ++s_number_commands;

        ( this->m_reciever->* ( this->m_action ) ) ();
    }

    void Command::undo()
    {
        if ( s_number_commands == 0 )
            return;

        s_command_list[s_number_commands - 1]->m_reciever
        ->reinstate_memento ( s_memento_list[s_number_commands - 1] );

        --s_number_commands;
    }

    void Command::redo()
    {
        if ( s_number_commands > s_high_water )
            return;

        auto &ref = s_command_list[s_number_commands];
        ( ref->m_reciever->* ( ref->m_action ) ) ();

        ++s_number_commands;
    }
}
