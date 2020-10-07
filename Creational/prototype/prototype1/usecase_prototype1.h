#ifndef USECASE_PROTOTYPE1_H
#define USECASE_PROTOTYPE1_H

#include <iostream>
#include <memory>

#include "prototype1.h"

namespace Prototype1_ {


    class Warrior
    {
    public:
        virtual std::unique_ptr < Warrior > clone() = 0;
        virtual void info() = 0;
        virtual ~Warrior();

        static std::unique_ptr < Warrior > create_warrior ( Warrior_ID id );

    protected:
        static void add_prototype ( Warrior_ID id, Warrior *prototype );
        static void remove_prototype ( Warrior_ID id );
    };


    class Dummy {};
    class Infantryman : public Warrior
    {
    public:
        virtual std::unique_ptr < Warrior > clone() override;
        virtual void info() override;
        virtual ~Infantryman() override;


    protected:
        static Infantryman s_prototype;
        Infantryman ( Dummy );
    };


    class Archer : public Warrior
    {
    public:
        virtual std::unique_ptr < Warrior > clone() override;
        virtual void info() override;
        virtual ~Archer() override;

    protected:
        static Archer s_prototype;
        Archer ( Dummy );
    };


    class Horseman : public Warrior
    {
    public:
        virtual std::unique_ptr < Warrior > clone() override;
        virtual void info() override;
        virtual ~Horseman() override;

    protected:
        static Horseman s_prototype;
        Horseman ( Dummy );
    };
}
#endif // USECASE_PROTOTYPE1_H
