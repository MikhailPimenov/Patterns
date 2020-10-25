#include "usecase_proxy2.h"

namespace Proxy2_ {

    Item::Item()
        : m_id { ++s_id_generator }
    {
        std::cout << "Item " << this->m_id << " acquired\n";
    }
    Item::Item ( const Item &i )
        : m_id { ++s_id_generator }
    {

        std::cout << "Item " << this->m_id
                  << " acquired using copy constructor from Item "
                  << i.m_id << '\n';
    }
    Item::~Item()
    {
        std::cout << "Item " << this->m_id << " destroyed\n";
    }

    Item &Item::operator= ( const Item &i )
    {
        if ( &i == this )
            return *this;

        std::cout << "Item " << this->m_id
                  << " reassigned using copy assignement operator of Item "
                  << i.m_id << '\n';

        return *this;
    }

    void Item::show_id() const
    {
        std::cout << "Item " << this->m_id << '\n';
    }




}
