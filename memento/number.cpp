#include "number.h"

Memento::Memento ( int value ) : mValue { value }
{}
Memento::~Memento()
{}

Number::Number ( int value ) : mValue { value }
{}
Number::~Number()
{}
int Number::getValue() const
{
    return mValue;
}
void Number::dubble()
{
    mValue *= 2;
}
void Number::half()
{
    mValue /= 2;
}
std::shared_ptr < Memento > Number::saveMemento() const
{
    return std::make_shared < Memento > ( mValue );
}
void Number::loadMemento ( std::shared_ptr<Memento> state )
{
    mValue = state.get()->mValue;
}

Command::Command ( std::shared_ptr < Number > object,
                   void ( Number:: *action )() )
    : mObject { std::move ( object ) },
      mAction { action }
{}
Command::~Command()
{}
void Command::execute()
{
    s_mementos[s_current] = mObject.get()->saveMemento();
    s_commands[s_current] = std::make_shared < Command > ( *this );
    ++s_current;

    s_max = s_current;

    ( mObject.get()->*mAction )();
}
void Command::undo()
{
    if ( s_current < 1 )
    {
        std::cout << "State list is empty\n";
        return;
    }
    s_commands[s_current - 1].get()->mObject.get()->loadMemento ( s_mementos[s_current - 1] );
    --s_current;
}
void Command::redo()
{
    if ( s_current == s_max )
    {
        std::cout << "This is the last state available\n";
        return;
    }
    ( s_commands[s_current].get()->mObject.get()->* ( s_commands[s_current].get()->mAction ) )();
    ++s_current;
}
