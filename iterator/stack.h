#ifndef STACK_H
#define STACK_H

#include <cassert>
#include <iostream>

class Stack
{
private:
    int mItems[10];
    int mStackPointer;
public:
    Stack();
    virtual ~Stack();

    void push ( int item );
    int pop();
    bool isEmpty() const;

    friend class StackIterator;
};

class StackIterator
{
private:
    const Stack *mStack;
    int mIndex;
public:
    StackIterator ( const Stack *stack );
    virtual ~StackIterator();

    StackIterator& operator++ ();
    int operator* () const;
    bool operator() () const;
};

bool operator== ( const Stack &s1, const Stack &s2 );
#endif // STACK_H
