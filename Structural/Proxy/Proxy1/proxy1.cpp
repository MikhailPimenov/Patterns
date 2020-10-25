#include "proxy1.h"

namespace Proxy1_ {


    Proxy1::Proxy1()
        : m_object { nullptr }, m_id { ++s_id_generator }
    {}

    Proxy1::~Proxy1()
    {
        if ( this->m_object )
            delete m_object;
    }

    void Proxy1::draw()
    {
        if ( ! ( this->m_object ) )
            this->m_object = new Image ( this->m_id );

        this->m_object->draw();
    }


}
