#ifndef ITERATOR1_H
#define ITERATOR1_H

#include "usecase_iterator1.h"

namespace Iterator1_ {

    class Iterator1
    {
    private:
        const Stack *m_stack;
        int m_index;
    public:
        Iterator1 ( const Stack *stack );
        virtual ~Iterator1();

        int item() const;
        void first();
        void next();
        bool is_done() const;
    };

}
#endif // ITERATOR1_H
