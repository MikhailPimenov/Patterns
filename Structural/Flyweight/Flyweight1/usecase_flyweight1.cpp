#include "usecase_flyweight1.h"

namespace Flyweight1_ {

    No_flyweight::No_flyweight()
        : m_first_value { s_number / s_y },
          m_second_value { s_number % s_y }
    {
        ++ ( this->s_number );
        std::cout << "No_flyweight acquired\n";
    }
    No_flyweight::~No_flyweight()
    {
        std::cout << "No_flyweight destroyed\n";
    }
    void No_flyweight::report() const
    {
        std::cout << this->m_first_value << this->m_second_value << ' ';
    }

}
