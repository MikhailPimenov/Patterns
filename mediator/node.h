#ifndef NODE_H
#define NODE_H

#include <algorithm>
#include <iostream>
#include <vector>

class Node
{
private:
    int mValue;
public:
    Node ( int value );
    virtual ~Node();

    int getValue() const;
    friend bool operator== ( const Node &node1, const Node &node2 );
};

class Mediator
{
private:
    std::vector < Node > mRepository;

public:
    Mediator();
    virtual ~Mediator();

    void add ( const Node &node );
    void remove ( int value );
    void traverse() const;
};

#endif // NODE_H
