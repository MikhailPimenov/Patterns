#include <iostream>
#include <memory>

// patterns: flyweight
#include "noflyweight/twodigitnumber.h"
#include "flyweight/twodigitsnumberflyweight.h"

void noflyweight()
{
    for ( int count1 = 0; count1 < 6; ++count1 )
    {
        for ( int count2 = 0; count2 < 10; ++count2 )
        {
            TwoDigitNumber n ( count1 * 10 + count2 );
            n.printNumber();
        }
        std::cout << '\n';
    }

}

std::vector < TwoDigitsNumberFlyweight > Factory::s_flyweights;

void flyweight()
{
    for ( int count1 = 0; count1 < 6; ++count1 )
    {
        for ( int count2 = 0; count2 < 10; ++count2 )
        {
            TwoDigitsNumberFlyweight n = Factory::getFlyweight ( count1 );
            n.setSecond ( count2 );
            n.printNumber();
        }
        std::cout << '\n';
    }
}

void testFlyweight()
{
    std::cout << "\nno flyweight:\n";
    noflyweight();
    std::cout << "\nflyweight:\n";
    flyweight();
    std::cout << "\ntestFlyweight(): end\n";
}

int main()
{
    testFlyweight();
    std::cout << "main(): end\n";
    return 0;
}
