#include "usecase_facade1.h"


namespace Facade1_ {


    Red_balls::Red_balls()
        : m_counter { 0 }
    {}
    Red_balls::~Red_balls()
    {}
    void Red_balls::reset_counter()
    {
        this->m_counter = 0;
    }
    void Red_balls::increase_counter()
    {
        ++ ( this->m_counter );
    }
    bool Red_balls::get_state()
    {
        return this->m_counter >= 30;
    }
    Red_balls::operator bool()
    {
        return this->get_state();
    }


    Green_balls::Green_balls()
        : m_counter { 0 }
    {}
    Green_balls::~Green_balls()
    {}
    void Green_balls::reset_counter()
    {
        this->m_counter = 0;
    }
    void Green_balls::increase_counter()
    {
        ++ ( this->m_counter );
    }
    bool Green_balls::get_state()
    {
        return this->m_counter >= 30;
    }
    Green_balls::operator bool()
    {
        return this->get_state();
    }


    Blue_balls::Blue_balls()
        : m_counter { 0 }
    {}
    Blue_balls::~Blue_balls()
    {}
    void Blue_balls::reset_counter()
    {
        this->m_counter = 0;
    }
    void Blue_balls::increase_counter()
    {
        ++ ( this->m_counter );
    }
    bool Blue_balls::get_state()
    {
        return this->m_counter >= 30;
    }
    Blue_balls::operator bool()
    {
        return this->get_state();
    }


    Yellow_balls::Yellow_balls()
        : m_counter { 0 }
    {}
    Yellow_balls::~Yellow_balls()
    {}
    void Yellow_balls::reset_counter()
    {
        this->m_counter = 0;
    }
    void Yellow_balls::increase_counter()
    {
        ++ ( this->m_counter );
    }
    bool Yellow_balls::get_state()
    {
        return this->m_counter >= 30;
    }
    Yellow_balls::operator bool()
    {
        return this->get_state();
    }

}
