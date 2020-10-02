#include "usecase_builder1.h"

namespace Builder1_ {

    void Infantryman::info() const
    {
        std::cout << "Infantryman\n";
    }
    void Archer::info() const
    {
        std::cout << "Archer\n";
    }
    void Horseman::info() const
    {
        std::cout << "Horseman\n";
    }
    void Catapult::info() const
    {
        std::cout << "Catapult\n";
    }
    void Elephant::info() const
    {
        std::cout << "Elephant\n";
    }



    Army::Army()
    {
        std::cout << "Army created\n";
    }
    Army::~Army()
    {
        std::cout << "Army destroyed\n";
    }

    void Army::info() const
    {
        for ( const auto &warrior : this->m_i )
            warrior.info();
        for ( const auto &warrior : this->m_a )
            warrior.info();
        for ( const auto &warrior : this->m_h )
            warrior.info();
        for ( const auto &warrior : this->m_c )
            warrior.info();
        for ( const auto &warrior : this->m_e )
            warrior.info();
    }
}
