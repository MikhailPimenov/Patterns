#ifndef NUMBER1_H
#define NUMBER1_H

#include <iostream>
#include <memory>

class DivObserver1;
class ModObserver1;

class Number1
{
private:
    int mValue;

    std::weak_ptr < DivObserver1 > mDiv;
    std::weak_ptr < ModObserver1 > mMod;
public:
    Number1 ( int value );
    virtual ~Number1();

    void attach ( std::weak_ptr < DivObserver1 > div,
                  std::weak_ptr < ModObserver1 > mod );

    void setValue ( int value );
    int getValue() const;
    void notify() const;
};

class DivObserver1
{
private:
    int mDivisor;
public:
    DivObserver1 ( int divisor );
    virtual ~DivObserver1();

    void update ( int value );
};

class ModObserver1
{
private:
    int mModule;
public:
    ModObserver1 ( int module );
    virtual ~ModObserver1();

    void update ( int value );
};

#endif // NUMBER1_H
