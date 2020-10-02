#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include <memory>


#include "usecase_factory.h"

class FactoryWarrior
{
public:
    FactoryWarrior();
    virtual ~FactoryWarrior();

    virtual std::unique_ptr < Factory_::Warrior > create_warrior() const = 0;
};

class FactoryHorseman : public FactoryWarrior
{
public:
    FactoryHorseman();
    virtual ~FactoryHorseman() override;

    virtual std::unique_ptr < Factory_::Warrior > create_warrior() const override;
};
class FactoryInfantryman : public FactoryWarrior
{
public:
    FactoryInfantryman();
    virtual ~FactoryInfantryman() override;

    virtual std::unique_ptr < Factory_::Warrior > create_warrior() const override;
};
class FactoryArcher : public FactoryWarrior
{
public:
    FactoryArcher();
    virtual ~FactoryArcher() override;

    virtual std::unique_ptr < Factory_::Warrior > create_warrior() const override;
};



#endif // FACTORY_H
