#include "node.h"

Node::Node ( int value ) : mValue { value }
{
}
Node::~Node()
{}
int Node::getValue() const
{
    return mValue;
}
bool operator== ( const Node &node1, const Node &node2 )
{
    return node1.mValue == node2.mValue;
}

Mediator::Mediator()
{}
Mediator::~Mediator()
{}
void Mediator::add ( const Node &node )
{
    mRepository.push_back ( node );
}
void Mediator::remove ( int value )
{
    auto iterator = std::find ( mRepository.cbegin(), mRepository.cend(), Node ( value ) );

    if ( iterator != mRepository.cend() )
        mRepository.erase ( iterator );
}
void Mediator::traverse() const
{
    for ( const auto &element : mRepository )
        std::cout << "Node " << element.getValue() << "  ";
    std::cout << '\n';
}
