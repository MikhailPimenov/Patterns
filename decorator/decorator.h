#ifndef DECORATOR_H
#define DECORATOR_H

#include <memory>
#include "i.h"

class Decorator : public I
{
protected:
    std::unique_ptr < I > mInterface;
public:
    Decorator ( std::unique_ptr < I > interface );
    virtual ~Decorator() override;

    virtual void doIt() const override = 0;
};

class X : public Decorator
{
public:
    X ( std::unique_ptr < I > interface );
    virtual ~X() override;

    virtual void doIt() const override;
};

class Y : public Decorator
{
public:
    Y ( std::unique_ptr < I > interface );
    virtual ~Y() override;

    virtual void doIt() const override;
};

class Z : public Decorator
{
public:
    Z ( std::unique_ptr < I > interface );
    virtual ~Z() override;

    virtual void doIt() const override;
};
#endif // DECORATOR_H
