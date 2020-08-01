#include "twodigitnumber.h"

TwoDigitNumber::TwoDigitNumber ( int number )
    : mFirst { number / 10 }, mSecond { number % 10 }
{
}

void TwoDigitNumber::printNumber() const
{
    std::cout << mFirst << mSecond << ' ';
}
