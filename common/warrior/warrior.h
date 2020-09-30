#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>

class Warrior
{
public:
    Warrior();
    virtual ~Warrior();

    virtual void info() const = 0;
};

class Horseman : public Warrior
{
public:
    Horseman();
    virtual ~Horseman() override;

    virtual void info() const override;
};
class Infantryman : public Warrior
{
public:
    Infantryman();
    virtual ~Infantryman() override;

    virtual void info() const override;
};
class Archer : public Warrior
{
public:
    Archer();
    virtual ~Archer() override;

    virtual void info() const override;
};


#endif // WARRIOR_H
