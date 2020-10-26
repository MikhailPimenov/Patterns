#ifndef USECASE_ITERATOR1_H
#define USECASE_ITERATOR1_H

#include <cassert>

namespace Iterator1_ {

//class Stack_iterator;
    class Stack
    {
    private:
        int m_items[10];
        int m_stack_pointer;
    public:
        friend class Iterator1;

        Stack();
        virtual ~Stack();

        void push_back ( int in );
        void pop_back();
        int top() const;
        bool empty() const;

    };

}

#endif // USECASE_ITERATOR1_H
