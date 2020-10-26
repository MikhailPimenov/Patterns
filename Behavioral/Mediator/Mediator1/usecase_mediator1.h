#ifndef USECASE_MEDIATOR1_H
#define USECASE_MEDIATOR1_H

#include <iostream>
#include <set>

namespace Mediator1_ {

    class No_mediator_nodes
    {
    private:
        No_mediator_nodes *m_next;
        int m_value;

    public:
        No_mediator_nodes ( int value );
        virtual ~No_mediator_nodes();

        void add_next ( No_mediator_nodes *next );
        void traverse ( No_mediator_nodes *start = nullptr );
        void remove_node ( int value, No_mediator_nodes *start = nullptr );
    };


    class Node
    {
    private:
        int m_value;

    public:
        Node ( int value );
        virtual ~Node();

        int get_value() const;

    };

}

#endif // USECASE_MEDIATOR1_H
