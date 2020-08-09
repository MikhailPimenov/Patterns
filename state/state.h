#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <memory>
class State;
class Machine
{
private:
    std::unique_ptr < State > mCurrentState;
public:
    Machine();
    virtual ~Machine();

    void setCurrentState ( std::unique_ptr < State > currentState );

    void on();
    void off();
    void execute() const;
};

class State
{    
public:
    State();
    virtual ~State();

    virtual void execute() = 0;

    virtual void on ( Machine *m );
    virtual void off ( Machine *m );
};

class StateOn : public State
{
public:
    StateOn();
    virtual ~StateOn() override;

    virtual void execute() override;
    virtual void off ( Machine *m ) override;
};

class StateOff : public State
{
public:
    StateOff();
    virtual ~StateOff() override;

    virtual void execute() override;
    virtual void on ( Machine *m ) override;
};

#endif // STATE_H
