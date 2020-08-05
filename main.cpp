#include <iostream>

// patterns: mediator
#include "nomediator/node1.h"
#include "mediator/node.h"

void nomediator()
{
    std::shared_ptr < Node1 > node1 ( std::make_shared < Node1 > ( 11 ) );
    std::shared_ptr < Node1 > node2 ( std::make_shared < Node1 > ( 22 ) );
    std::shared_ptr < Node1 > node3 ( std::make_shared < Node1 > ( 33 ) );
    std::shared_ptr < Node1 > node4 ( std::make_shared < Node1 > ( 44 ) );
    std::shared_ptr < Node1 > node5 ( std::make_shared < Node1 > ( 55 ) );

    node1.get()->add ( node2 );
    node1.get()->add ( node3 );
    node1.get()->add ( node4 );
    node1.get()->add ( node5 );

    node1.get()->traverse();
    node1.get()->remove ( 33 );
    node1.get()->traverse();
    node1.get()->remove ( 22 );
    node1.get()->traverse();
    node1.get()->remove ( 44 );
    node1.get()->remove ( 55 );
    node1.get()->traverse();
}
void mediator()
{
    Mediator repository;
    repository.add ( Node ( 11 ) );
    repository.add ( Node ( 22 ) );
    repository.add ( Node ( 33 ) );
    repository.add ( Node ( 44 ) );
    repository.add ( Node ( 55 ) );

    repository.traverse();
    repository.remove ( 99 );
    repository.traverse();
    repository.remove ( 33 );
    repository.traverse();
    repository.remove ( 22 );
    repository.traverse();
    repository.remove ( 55 );
    repository.traverse();
    repository.remove ( 44 );
    repository.traverse();
    repository.remove ( 11 );
    repository.traverse();
}

void testMediator()
{
    std::cout << "nomediator():\n";
    nomediator();

    std::cout << "mediator():\n";
    mediator();

    std::cout << "\ntestMediator(): end\n";
}

int main()
{
    testMediator();
    std::cout << "main(): end\n";

    return 0;
}
