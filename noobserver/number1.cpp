#include "number1.h"

Number1::Number1 ( int value )
    : mValue { value }
{}
Number1::~Number1()
{}
void Number1::setValue ( int value )
{
    mValue = value;
    notify();
}
int Number1::getValue() const
{
    return mValue;
}
void Number1::attach ( std::weak_ptr < DivObserver1 > div,
                       std::weak_ptr < ModObserver1 > mod )
{
    mDiv = std::move ( div );
    mMod = std::move ( mod );
}
void Number1::notify() const
{
    mDiv.lock().get()->update ( mValue );
    mMod.lock().get()->update ( mValue );
}

DivObserver1::DivObserver1 ( int divisor ) : mDivisor { divisor }
{
    std::cout << "\t\t\tDivObserver1 acquired\n";
}
DivObserver1::~DivObserver1()
{
    std::cout << "\t\t\tDivObserver1 destroyed\n";
}
void DivObserver1::update ( int value )
{
    std::cout << value << '/' << mDivisor << '=' << value / mDivisor << '\n';
}

ModObserver1::ModObserver1 ( int module ) : mModule { module }
{
    std::cout << "\t\t\tModObserver1 acquired\n";
}
ModObserver1::~ModObserver1()
{
    std::cout << "\t\t\tModObserver1 destroyed\n";
}
void ModObserver1::update ( int value )
{
    std::cout << '(' << value << ")mod" << mModule << '=' << value % mModule << '\n';
}
