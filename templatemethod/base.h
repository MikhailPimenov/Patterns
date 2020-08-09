#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base
{
public:
    Base();
    virtual ~Base();

    void a();
    virtual void phase1() = 0;
    void c();
    virtual void phase2() = 0;
    void e();

    void execute();
};

class Derived1 : public Base
{
public:
    Derived1();
    virtual ~Derived1() override;

    virtual void phase1() override;
    virtual void phase2() override;
};

class Derived2 : public Base
{
public:
    Derived2();
    virtual ~Derived2() override;

    virtual void phase1() override;
    virtual void phase2() override;
};

#endif // BASE_H
