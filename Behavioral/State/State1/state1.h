#ifndef STATE1_H
#define STATE1_H

#include <iostream>

namespace State1_ {


    class Machine
    {
    private:
        class State1 *m_state;

    public:
        Machine();
        virtual ~Machine();

        void set_current ( State1 *state );

        void on();
        void schrodinger_state();
        void off();
    };


    class State1
    {
    public:
        State1();
        virtual ~State1();

        virtual void on ( Machine *machine );
        virtual void schrodinger_state ( Machine *machine );
        virtual void off ( Machine *machine );
    };


    class On : public State1
    {
    public:
        On();
        virtual ~On() override;

        virtual void off ( Machine *machine ) override;
        virtual void schrodinger_state ( Machine *machine ) override;
    };


    class Schrodinger_state : public State1
    {
    public:
        Schrodinger_state();
        virtual ~Schrodinger_state() override;

        virtual void off ( Machine *machine ) override;
        virtual void on ( Machine *machine ) override;
    };


    class Off : public State1
    {
    public:
        Off();
        virtual ~Off() override;

        virtual void on ( Machine *machine ) override;
        virtual void schrodinger_state ( Machine *machine ) override;
    };


}
#endif // STATE1_H
