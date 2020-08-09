#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <memory>
#include <vector>

class Number;
class Observer
{
public:
    Observer();
    virtual ~Observer();
    virtual void update ( int value ) = 0;
    virtual void becomeAttached ( std::weak_ptr < Number > object,
                                  const std::shared_ptr < Observer > &thisObserver ) const = 0;

};

class Number
{
private:
    int mValue;
    std::vector < std::shared_ptr < Observer > > mObservers;
public:
    Number ( int value );
    virtual ~Number();

    void attach ( std::shared_ptr < Observer > observer );
    int getValue() const;
    void setValue ( int value );
    void notify() const;
};

class DivObserver : public Observer
{
private:
    int mDivisor;
public:
    DivObserver ( int divisor );
    virtual ~DivObserver() override;
    virtual void update ( int value ) override;
    virtual void becomeAttached ( std::weak_ptr < Number > object,
                                  const std::shared_ptr < Observer > &thisObserver ) const override;
};

class ModObserver : public Observer
{
private:
    int mModDivisor;
public:
    ModObserver ( int modDivisor );
    virtual ~ModObserver() override;
    virtual void update ( int value ) override;
    virtual void becomeAttached ( std::weak_ptr < Number > object,
                                  const std::shared_ptr < Observer > &thisObserver ) const override;
};

#endif // NUMBER_H
