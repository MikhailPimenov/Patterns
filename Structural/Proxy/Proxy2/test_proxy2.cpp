#include "test_proxy2.h"


namespace Proxy2_ {

    int Item::s_id_generator = -1;
    void no_proxy2_test()
    {
        std::cout << "No proxy:\n";

        Item *item = new Item();

        return;

        delete item;

    }
    void proxy2_test1()
    {
        std::cout << "Proxy:\n";

        std::cout << "Simple smart_pointer:\n";
        Smart_pointer < Item > item ( new Item );
        std::cout << "item:\n";
        if ( item )
            item->show_id();

        std::cout << "Smart_pointer acquired using copy constructor:\n";
        Smart_pointer < Item > item2 ( item );
        std::cout << "item:\n";
        if ( item )
            item->show_id();
        std::cout << "item2:\n";
        if ( item2 )
            item2->show_id();

        std::cout << "Smart_pointer acquired using move constructor:\n";
        Smart_pointer < Item > item3 ( std::move ( item ) );
        std::cout << "item:\n";
        if ( item )
            item->show_id();
        std::cout << "item3:\n";
        if ( item3 )
            item3->show_id();

        std::cout << "Smart_pointer acquired using copy assignement operator:\n";
        item = item2;
        std::cout << "item:\n";
        if ( item )
            item->show_id();
        std::cout << "item2:\n";
        if ( item2 )
            item2->show_id();

        std::cout << "Smart_pointer acquired using move assignement operator:\n";
        item = std::move ( item2 );
        std::cout << "item2:\n";
        if ( item2 )
            item2->show_id();
        std::cout << "item:\n";
        if ( item )
            item->show_id();


        return;
    }
    void test_proxy2()
    {
        no_proxy2_test();
        proxy2_test1();
    }
}
