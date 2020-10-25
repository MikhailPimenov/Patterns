#include "facade1.h"


namespace Facade1_ {

    Facade::Facade()
    {}
    Facade::~Facade()
    {}

    void Facade::reset_counter()
    {
        this->m_rb.reset_counter();
        this->m_gb.reset_counter();
        this->m_bb.reset_counter();
        this->m_yb.reset_counter();
    }
    void Facade::increase_counter()
    {
        if ( ! m_rb )
            this->m_rb.increase_counter();
        else if ( ! m_gb )
            this->m_gb.increase_counter();
        else if ( ! m_bb )
            this->m_bb.increase_counter();
        else if ( ! m_yb )
            this->m_yb.increase_counter();
    }
    bool Facade::get_state()
    {
        return this->m_rb
               && this->m_gb
               && this->m_bb
               && this->m_yb;
    }
    Facade::operator bool()
    {
        return this->get_state();
    }

}
