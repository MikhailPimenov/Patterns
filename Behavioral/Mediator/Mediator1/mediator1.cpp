#include "mediator1.h"

namespace Mediator1_ {

    Mediator1::Mediator1()
    {}
    Mediator1::~Mediator1()
    {}

    void Mediator1::add_node ( Node *node )
    {
        this->m_nodes.push_back ( node );
    }
    void Mediator1::remove_node ( int value )
    {
        auto it = std::find_if ( this->m_nodes.begin(), this->m_nodes.end(), [value] ( Node * n ) {
            return n->get_value() == value;
        } );

        if ( it != this->m_nodes.end() )
            this->m_nodes.erase ( it );
    }
    void Mediator1::traverse() const
    {
        for ( const auto &element : this->m_nodes )
            std::cout << element->get_value() << ' ';
        std::cout << '\n';
    }


}
