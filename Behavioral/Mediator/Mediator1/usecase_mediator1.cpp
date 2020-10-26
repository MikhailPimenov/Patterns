#include "usecase_mediator1.h"

namespace Mediator1_ {

    No_mediator_nodes::No_mediator_nodes ( int value )
        : m_next { nullptr }, m_value { value }
    {}
    No_mediator_nodes::~No_mediator_nodes()
    {}
    void No_mediator_nodes::add_next ( No_mediator_nodes *next )
    {
        if ( this->m_next )
            this->m_next->add_next ( next );
        else
            this->m_next = next;
    }
    void No_mediator_nodes::traverse ( No_mediator_nodes *start )
    {
        if ( start == this ) {
            std::cout << '\n';
            return;
        }
        if ( ! start )
            start = this;

        std::cout << this->m_value << ' ';
        if ( this->m_next )
            this->m_next->traverse ( start );
        else
            std::cout << '\n';
    }
    void No_mediator_nodes::remove_node ( int value, No_mediator_nodes *start )
    {
        if ( start == this )
            return;
        if ( ! start )
            start = this;

        if ( this->m_next ) {
            if ( this->m_next->m_value == value ) {
                if ( this->m_next->m_next )
                    this->m_next = this->m_next->m_next;
                else
                    this->m_next = nullptr;
            } else
                this->m_next->remove_node ( value, start );
        }
    }



    Node::Node ( int value )
        : m_value { value }
    {}
    Node::~Node()
    {}
    int Node::get_value() const
    {
        return this->m_value;
    }

}
