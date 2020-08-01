#include "twodigitsnumberflyweight.h"

TwoDigitsNumberFlyweight::TwoDigitsNumberFlyweight ( int first )
    : mFirts { first }, mSecond { 0 }
{
}

void TwoDigitsNumberFlyweight::printNumber() const
{
    std::cout << mFirts << mSecond << ' ';
}

void TwoDigitsNumberFlyweight::setSecond ( int second )
{
    mSecond = second;
}

bool TwoDigitsNumberFlyweight::operator== ( const TwoDigitsNumberFlyweight &n1 )
{
    return ( ( this->mFirts == n1.mFirts ) && ( this->mSecond == n1.mSecond ) );
}

TwoDigitsNumberFlyweight& Factory::getFlyweight ( int first )
{
    auto iterator = std::find ( s_flyweights.begin(),
                                s_flyweights.end(),
                                TwoDigitsNumberFlyweight ( first ) );

    if ( iterator == s_flyweights.end() )
    {
        s_flyweights.push_back ( TwoDigitsNumberFlyweight ( first ) );
        return s_flyweights.back();
    }

    return *iterator;
}
