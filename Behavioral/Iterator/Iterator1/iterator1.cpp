#include "iterator1.h"

namespace Iterator1_ {


    Iterator1::Iterator1 ( const Stack *stack )
        : m_stack { stack }
    {}
    Iterator1::~Iterator1()
    {}


    void Iterator1::first()
    {
        this->m_index = 0;
    }
    void Iterator1::next()
    {
        ++ ( this->m_index );
    }
    int Iterator1::item() const
    {
        return this->m_stack->m_items[this->m_index];
    }
    bool Iterator1::is_done() const
    {
        return this->m_index == this->m_stack->m_stack_pointer;
    }


}
