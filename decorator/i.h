#ifndef I_H
#define I_H

#include <iostream>

class I
{
public:
    I();
    virtual ~I();

    virtual void doIt() const = 0;
};

class A : public I
{
public:
    A();
    virtual ~A() override;

    virtual void doIt() const override;
};
#endif // I_H
