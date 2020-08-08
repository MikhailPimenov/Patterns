#include "number.h"

Number::Number ( int value ) : mValue { value }
{}
Number::~Number()
{}
void Number::attach ( std::shared_ptr < Observer > observer )
{
    mObservers.push_back ( observer );
}
void Number::setValue ( int value )
{
    mValue = value;
    notify();
}
void Number::notify() const
{
    for ( auto &element : mObservers )
        element.get()->update ( mValue );
}
int Number::getValue() const
{
    return mValue;
}

DivObserver::DivObserver ( std::weak_ptr < Number > object, int divisor )
    : mDivisor { divisor }
{
    object.lock().get()->attach ( std::shared_ptr < DivObserver > ( this ) );
    std::cout << "\t\t\tDivObserver acquired\n";
}
DivObserver::~DivObserver()
{
    std::cout << "\t\t\tDivObserver destroyed\n";
}
void DivObserver::update ( int value )
{
    std::cout << value << '/' << mDivisor << '=' << value / mDivisor << '\n';
}

ModObserver::ModObserver ( std::weak_ptr < Number > object, int module )
    : mModule { module }
{
    object.lock().get()->attach ( std::shared_ptr < ModObserver > ( this ) );
    std::cout << "\t\t\tModObserver acquired\n";
}
ModObserver::~ModObserver()
{
    std::cout << "\t\t\tModObserver destroyed\n";
}
void ModObserver::update ( int value )
{
    std::cout << '(' << value << ")module" << mModule << '=' << value % mModule << '\n';
}
