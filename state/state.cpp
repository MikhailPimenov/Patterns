#include "state.h"

Machine::Machine()
{
    setCurrentState ( std::make_unique < StateOff > () );
}
Machine::~Machine()
{}
void Machine::setCurrentState ( std::unique_ptr < State > currentState )
{
    mCurrentState = std::move ( currentState );
}
void Machine::on()
{
    mCurrentState->on ( this );
}
void Machine::off()
{
    mCurrentState->off ( this );
}
void Machine::execute() const
{
    mCurrentState->execute();
}

State::State()
{}
State::~State()
{}
void State::on ( Machine* )
{
    std::cout << "    already ON\n";
}
void State::off ( Machine* )
{
    std::cout << "    already OFF\n";
}

StateOn::StateOn()
{
    std::cout << "StateOn acquired\n";
}
StateOn::~StateOn()
{
    std::cout << "StateOn destroyed\n";
}
void StateOn::off ( Machine *m )
{
    m->setCurrentState ( std::make_unique < StateOff > () );
}
void StateOn::execute()
{
    std::cout << "DOING SOMETHING ON\n";
}

StateOff::StateOff()
{
    std::cout << "StateOff acquired\n";
}
StateOff::~StateOff()
{
    std::cout << "StateOff destroyed\n";
}
void StateOff::on ( Machine *m )
{
    m->setCurrentState ( std::make_unique < StateOn > () );
}
void StateOff::execute()
{
    std::cout << "DOING SOMETHING OFF\n";
}
