#include "usecase_object_pool1.h"

namespace Object_Pool1_ {

    Resource::Resource ( int value ) : m_value { value }
    {
        std::cout << "Resource aqcuired\n";
    }
    Resource::~Resource()
    {
        std::cout << "Resource destroyed\n";
    }

    void Resource::reset()
    {
        this->m_value = 0;
    }
    int Resource::get_value() const
    {
        return this->m_value;

    }
    void Resource::set_value ( int value )
    {
        this->m_value = value;
    }
}
