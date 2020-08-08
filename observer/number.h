#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <memory>
#include <vector>

class Observer
{
public:
    virtual void update ( int value ) = 0;
    virtual ~Observer(){}
};

class Number
{
private:
    int mValue;
    std::vector < std::shared_ptr < Observer > > mObservers;
public:
    Number ( int value = 0 );
    virtual ~Number();

    void attach ( std::shared_ptr < Observer > observer );

    void setValue ( int value );
    int getValue() const;
    void notify() const;
};

class DivObserver : public Observer
{
private:
    int mDivisor;
public:
    DivObserver ( std::weak_ptr < Number > object, int divisor );
    virtual ~DivObserver() override;

    virtual void update ( int value ) override;
};

class ModObserver : public Observer
{
private:
    int mModule;
public:
    ModObserver ( std::weak_ptr < Number > object, int module );
    virtual ~ModObserver() override;

    virtual void update ( int value ) override;
};

#endif // NUMBER_H
