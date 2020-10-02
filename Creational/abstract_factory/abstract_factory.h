#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include <memory>

#include "usecase_abstract_factory.h"

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();

    virtual std::unique_ptr < Abstract_factory::Infantryman > create_infantryman() const = 0;
    virtual std::unique_ptr < Abstract_factory::Horseman >    create_horseman()    const = 0;
    virtual std::unique_ptr < Abstract_factory::Archer >      create_archer()      const = 0;
};

class AbstractRomanFactory : public AbstractFactory
{
public:
    AbstractRomanFactory();
    virtual ~AbstractRomanFactory() override;

    virtual std::unique_ptr < Abstract_factory::Infantryman > create_infantryman() const override;
    virtual std::unique_ptr < Abstract_factory::Horseman >    create_horseman()    const override;
    virtual std::unique_ptr < Abstract_factory::Archer >      create_archer()      const override;
};

class AbstractCarthagenianFactory : public AbstractFactory
{
public:
    AbstractCarthagenianFactory();
    virtual ~AbstractCarthagenianFactory() override;

    virtual std::unique_ptr < Abstract_factory::Infantryman > create_infantryman() const override;
    virtual std::unique_ptr < Abstract_factory::Horseman >    create_horseman()    const override;
    virtual std::unique_ptr < Abstract_factory::Archer >      create_archer()      const override;
};



#endif // ABSTRACT_FACTORY_H
