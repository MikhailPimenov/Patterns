#ifndef TWODIGITNUMBER_H
#define TWODIGITNUMBER_H

#include <iostream>

class TwoDigitNumber final
{
private:
    int mFirst;
    int mSecond;
public:
    TwoDigitNumber ( int number = 0 );

    void printNumber() const;
};

#endif // TWODIGITNUMBER_H
