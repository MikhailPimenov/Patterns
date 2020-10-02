#ifndef USECASE_ABSTRACT_FACTORY_H
#define USECASE_ABSTRACT_FACTORY_H

#include <iostream>

namespace Abstract_factory {
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

        virtual void info() const override = 0;
    };
    class Infantryman : public Warrior
    {
    public:
        Infantryman();
        virtual ~Infantryman() override;

        virtual void info() const override = 0;
    };
    class Archer : public Warrior
    {
    public:
        Archer();
        virtual ~Archer() override;

        virtual void info() const override = 0;
    };


    class RomanInfantryman : public Infantryman
    {
    public:
        RomanInfantryman();
        virtual ~RomanInfantryman() override;

        virtual void info() const override;
    };
    class RomanArcher : public Archer
    {
    public:
        RomanArcher();
        virtual ~RomanArcher() override;

        virtual void info() const override;
    };
    class RomanHorseman : public Horseman
    {
    public:
        RomanHorseman();
        virtual ~RomanHorseman() override;

        virtual void info() const override;
    };


    class CarthagenianInfantryman : public Infantryman
    {
    public:
        CarthagenianInfantryman();
        virtual ~CarthagenianInfantryman() override;

        virtual void info() const override;
    };
    class CarthagenianArcher : public Archer
    {
    public:
        CarthagenianArcher();
        virtual ~CarthagenianArcher() override;

        virtual void info() const override;
    };
    class CarthagenianHorseman : public Horseman
    {
    public:
        CarthagenianHorseman();
        virtual ~CarthagenianHorseman() override;

        virtual void info() const override;
    };
}

#endif // USECASE_ABSTRACT_FACTORY_H
