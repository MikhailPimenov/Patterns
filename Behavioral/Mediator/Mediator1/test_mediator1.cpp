#include "test_mediator1.h"

namespace Mediator1_ {

    void no_mediator1_test()
    {
        std::cout << "No mediator:\n";

        No_mediator_nodes n1 ( 11 );
        No_mediator_nodes n2 ( 22 );
        No_mediator_nodes n3 ( 33 );
        No_mediator_nodes n4 ( 44 );
        No_mediator_nodes n5 ( 55 );

        n1.add_next ( &n2 );
        n1.add_next ( &n3 );
        n1.add_next ( &n4 );
        n1.add_next ( &n5 );

        n5.add_next ( &n1 );
        n1.traverse();

        n1.remove_node ( 33 );
        n1.traverse();

        n1.remove_node ( 33 );
        n1.traverse();

        n1.remove_node ( 44 );
        n1.traverse();

        n1.remove_node ( 22 );
        n1.traverse();

    }


    void mediator1_test()
    {
        std::cout << "Mediator:\n";
        Node n1 ( 11 );
        Node n2 ( 22 );
        Node n3 ( 33 );
        Node n4 ( 44 );
        Node n5 ( 55 );

        Mediator1 m;
        m.add_node ( &n1 );
        m.add_node ( &n2 );
        m.add_node ( &n3 );
        m.add_node ( &n4 );
        m.add_node ( &n5 );

        m.traverse();

        m.remove_node ( 22 );
        m.traverse();

        m.remove_node ( 55 );
        m.traverse();

        m.remove_node ( 44 );
        m.traverse();

        m.remove_node ( 33 );
        m.traverse();
    }
    void test_mediator1()
    {
        std::cout << "test_mediator():\n";
        no_mediator1_test();

        mediator1_test();
    }


}
