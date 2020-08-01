#ifndef TWODIGITSNUMBERFLYWEIGHT_H
#define TWODIGITSNUMBERFLYWEIGHT_H

#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

class TwoDigitsNumberFlyweight final
{
private:
    int mFirts;
    int mSecond;
public:
    TwoDigitsNumberFlyweight ( int first = 0 );
    void setSecond ( int second );

    void printNumber() const;

    bool operator== ( const TwoDigitsNumberFlyweight &n1 );
};

class Factory
{
private:
    static std::vector < TwoDigitsNumberFlyweight > s_flyweights;
public:
    static TwoDigitsNumberFlyweight& getFlyweight ( int first = 0 );
};

#endif // TWODIGITSNUMBERFLYWEIGHT_H
