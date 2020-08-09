#include "number.h"

Observer::Observer()
{}
Observer::~Observer()
{}
void Observer::becomeAttached ( std::weak_ptr < Number > object,
                                const std::shared_ptr < Observer > &thisObserver ) const
{
    object.lock().get()->attach ( std::shared_ptr < Observer > ( thisObserver ) );
}

Number::Number ( int value ) : mValue { value }
{}
Number::~Number()
{}
void Number::attach ( std::shared_ptr < Observer > observer )
{
    mObservers.push_back ( std::move ( observer ) );
}
int Number::getValue() const
{
    return mValue;
}
void Number::setValue ( int value )
{
    mValue = value;
    notify();
}
void Number::notify() const
{
    for ( const auto &element : mObservers )
        element.get()->update ( mValue );
}

DivObserver::DivObserver ( int divisor )
    : mDivisor { divisor }
{
    std::cout << "DivObserver acquired\n";
}
DivObserver::~DivObserver()
{
    std::cout << "DivObserver destroyed\n";
}
void DivObserver::update ( int value )
{
    std::cout << value << '/' << mDivisor << '=' << value / mDivisor << '\n';
}
void DivObserver::becomeAttached ( std::weak_ptr < Number > object,
                                   const std::shared_ptr < Observer > &thisObserver ) const
{
    Observer::becomeAttached ( std::move ( object ), thisObserver );
}

ModObserver::ModObserver ( int modDivisor )
    : mModDivisor { modDivisor }
{
    std::cout << "ModObserver acquired\n";
}
ModObserver::~ModObserver()
{
    std::cout << "ModObserver destroyed\n";
}
void ModObserver::update ( int value )
{
    std::cout << '(' << value << ")mod" << mModDivisor << '=' << value % mModDivisor << '\n';
}
void ModObserver::becomeAttached ( std::weak_ptr < Number > object,
                                   const std::shared_ptr < Observer > &thisObserver ) const
{
    Observer::becomeAttached ( std::move ( object ), thisObserver );
}
