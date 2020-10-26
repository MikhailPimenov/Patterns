#include "usecase_iterator1.h"

namespace Iterator1_ {

    Stack::Stack()
        : m_stack_pointer { -1 }
    {}
    Stack::~Stack()
    {}

    void Stack::push_back ( int in )
    {
        assert ( this->m_stack_pointer < 9 );
        this->m_items[++ ( this->m_stack_pointer )] = in;
    }
    void Stack::pop_back()
    {
        assert ( this->m_stack_pointer > -1 );
        -- ( this->m_stack_pointer );
    }
    int Stack::top() const
    {
        assert ( this->m_stack_pointer > -1 );
        return this->m_items[m_stack_pointer];
    }
    bool Stack::empty() const
    {
        return this->m_stack_pointer == -1;
    }

}
