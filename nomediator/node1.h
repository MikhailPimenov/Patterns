#ifndef NODE1_H
#define NODE1_H

#include <iostream>
#include <memory>

class Node1
{
private:
    int mValue;
    std::weak_ptr < Node1 > mNext;
public:
    Node1 ( int value );
    virtual ~Node1();

    void add ( std::weak_ptr < Node1 > next );
    void remove ( int value );
    int getValue() const;
    void traverse() const;
};

#endif // NODE1_H
