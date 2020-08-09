#include <iostream>

// patterns: observer
#include "noobserver/number1.h"
#include "observer/number.h"

void noobserver()
{
    Number1 n ( 14 );
    std::shared_ptr < DivObserver1 > d1 ( std::make_shared < DivObserver1 > ( 3 ) );
    std::shared_ptr < ModObserver1 > m1 ( std::make_shared < ModObserver1 > ( 3 ) );

    n.attach ( d1, m1 );

    n.setValue ( 23 );
    n.setValue ( 25 );
}

void observer()
{
    std::shared_ptr < Number > n ( std::make_shared < Number > ( 14 ) );
    std::shared_ptr < Observer > d1 ( std::make_shared < DivObserver > ( 4 ) );
    std::shared_ptr < Observer > d2 ( std::make_shared < DivObserver > ( 5 ) );
    std::shared_ptr < Observer > m1 ( std::make_shared < ModObserver > ( 4 ) );
    std::shared_ptr < Observer > m2 ( std::make_shared < ModObserver > ( 5 ) );

    d1.get()->becomeAttached ( n, d1 );
    d2.get()->becomeAttached ( n, d2 );
    m1.get()->becomeAttached ( n, m1 );
    m2.get()->becomeAttached ( n, m2 );

    n.get()->setValue ( 17 );
    n.get()->setValue ( 23 );
}

void testObserver()
{
    std::cout << "\nnoobserver\n";
    noobserver();
    std::cout << "\nobserver\n";
    observer();
    std::cout << "\ntestObserver(): end\n";
}

int main()
{
    testObserver();
    std::cout << "main(): end\n";

    return 0;
}
