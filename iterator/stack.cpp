#include "stack.h"

Stack::Stack() : mStackPointer { -1 }
{}

Stack::~Stack()
{}

void Stack::push ( int item )
{
    assert ( mStackPointer < 10 );
    mItems[++mStackPointer] = item;
}
int Stack::pop()
{
    assert ( mStackPointer >= 0 );
    return mItems[mStackPointer--];
}
bool Stack::isEmpty() const
{
    return mStackPointer == -1;
}

StackIterator::StackIterator ( const Stack *stack ) : mStack { stack }, mIndex { 0 }
{}
StackIterator::~StackIterator()
{}
StackIterator& StackIterator::operator++()
{
    ++mIndex;
    return *this;
}
int StackIterator::operator*() const
{
    return mStack->mItems[mIndex];
}
bool StackIterator::operator() () const
{
    return ( mIndex != mStack->mStackPointer - 1 );
}

bool operator== ( const Stack &s1, const Stack &s2 )
{
    StackIterator si1 ( &s1 ), si2 ( &s2 );

    while ( si1() && si2() )
    {
        if ( *si1 != *si2 )
            return false;

        ++si1;
        ++si2;
    }

    return ( si1() == si2() );
}
