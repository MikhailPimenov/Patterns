#include "state1.h"


namespace State1_ {

    Machine::Machine()
    {}
    Machine::~Machine()
    {
        if ( this->m_state )
            delete this->m_state;
    }
    void Machine::set_current ( State1 *state )
    {
        this->m_state = state;
    }
    void Machine::on()
    {
        this->m_state->on ( this );
    }
    void Machine::off()
    {
        this->m_state->off ( this );
    }
    void Machine::schrodinger_state()
    {
        this->m_state->schrodinger_state ( this );
    }


    State1::State1()
    {}
    State1::~State1()
    {}
    void State1::on ( Machine * )
    {
        std::cout << "Already on\n";
    }
    void State1::off ( Machine * )
    {
        std::cout << "Already off\n";
    }
    void State1::schrodinger_state ( Machine * )
    {
        std::cout << "Already schrodinger state\n";
    }



    On::On()
    {
        std::cout << "class On acquired\n";
    }
    On::~On()
    {
        std::cout << "class On destroyed\n";
    }
    void On::off ( Machine * )
    {
        std::cout << "Cannot change directly from \"on-\" to \"off\"-state\n";
    }
    void On::schrodinger_state ( Machine *machine )
    {
        std::cout << "Changing from \"on-\" to \"schrodinger state\"-state\n";
        machine->set_current ( new Schrodinger_state );
        delete this;
    }



    Off::Off()
    {
        std::cout << "class Off acquired\n";
    }
    Off::~Off()
    {
        std::cout << "class Off destroyed\n";
    }
    void Off::on ( Machine * )
    {
        std::cout << "Cannot change directly from \"off-\" to \"on\"-state\n";
    }
    void Off::schrodinger_state ( Machine *machine )
    {
        std::cout << "Changing from \"off-\" to \"schrodinger state\"-state\n";
        machine->set_current ( new Schrodinger_state );
        delete this;
    }



    Schrodinger_state::Schrodinger_state()
    {
        std::cout << "class Schrodinger_state acquired\n";
    }
    Schrodinger_state::~Schrodinger_state()
    {
        std::cout << "class Schrodinger_state destroyed\n";
    }
    void Schrodinger_state::off ( Machine *machine )
    {
        std::cout << "Changing from \"Schrodinger state\" to \"off\"-state\n";
        machine->set_current ( new Off );
        delete this;
    }
    void Schrodinger_state::on ( Machine *machine )
    {
        std::cout << "Changing from \"Schrodinger state\" to \"on\"-state\n";
        machine->set_current ( new On );
        delete this;
    }



}
