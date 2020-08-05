#include "node1.h"

Node1::Node1 ( int value ) : mValue { value }
{}
Node1::~Node1()
{}
void Node1::add ( std::weak_ptr < Node1 > next )
{
    if ( ! mNext.lock() )
        mNext = std::move ( next );
    else
        mNext.lock().get()->add ( next );
}
void Node1::remove ( int value )
{
    if ( mNext.lock() )
    {
        if ( mNext.lock().get()->getValue() == value )
            mNext = mNext.lock().get()->mNext;
        else
            if ( mNext.lock().get() != this )
                mNext.lock().get()->remove ( value );
    }
}
int Node1::getValue() const
{
    return mValue;
}
void Node1::traverse() const
{
    std::cout << "Node " << mValue << "  ";

    auto next = mNext;
    while ( next.lock() )
    {
        std::cout << "Node " << next.lock().get()->getValue() << "  ";
        next = next.lock().get()->mNext;
    }

    std::cout << '\n';
}
