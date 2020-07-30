#ifndef A_H
#define A_H

#include <iostream>

class Aonly
{
public:
    Aonly();
    virtual ~Aonly();

    virtual void doIt() const;
};

class AwithX : public Aonly
{
public:
    AwithX();
    virtual ~AwithX() override;

    virtual void doIt() const override;
};

class AwithXY : public AwithX
{
public:
    AwithXY();
    virtual ~AwithXY() override;

    virtual void doIt() const override;
};

class AwithXYZ : public AwithXY
{
public:
    AwithXYZ();
    virtual ~AwithXYZ() override;

    virtual void doIt() const override;
};

#endif // A_H
