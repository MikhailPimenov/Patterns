#ifndef MEDIATOR1_H
#define MEDIATOR1_H

#include <algorithm>
#include <vector>

#include "usecase_mediator1.h"

namespace Mediator1_ {

    class Mediator1
    {
    private:
        std::vector < Node * > m_nodes;
    public:
        Mediator1();
        virtual ~Mediator1();

        void add_node ( Node *node );
        void remove_node ( int value );
        void traverse() const;
    };




}
#endif // MEDIATOR1_H
