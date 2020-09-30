#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include <memory>

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



class FactoryWarrior
{
public:
    FactoryWarrior();
    virtual ~FactoryWarrior();

    virtual std::unique_ptr < Warrior > create_warrior() const = 0;
};

class FactoryHorseman : public FactoryWarrior
{
public:
    FactoryHorseman();
    virtual ~FactoryHorseman() override;

    virtual std::unique_ptr < Warrior > create_warrior() const override;
};
class FactoryInfantryman : public FactoryWarrior
{
public:
    FactoryInfantryman();
    virtual ~FactoryInfantryman() override;

    virtual std::unique_ptr < Warrior > create_warrior() const override;
};
class FactoryArcher : public FactoryWarrior
{
public:
    FactoryArcher();
    virtual ~FactoryArcher() override;

    virtual std::unique_ptr < Warrior > create_warrior() const override;
};



#endif // FACTORY_H
