#ifndef USECASE_BUILDER1_H
#define USECASE_BUILDER1_H

#include <iostream>
#include <vector>

namespace Builder1_ {

    class Warrior
    {
    public:
        Warrior() = default;
        virtual ~Warrior() = default;

        virtual void info() const = 0;
    };

    class Infantryman : public Warrior
    {
    public:
        Infantryman() = default;
        virtual void info() const override;
    };
    class Archer : public Warrior
    {
    public:
        Archer() = default;
        virtual void info() const override;
    };
    class Horseman : public Warrior
    {
    public:
        Horseman() = default;
        virtual void info() const override;
    };
    class Catapult : public Warrior
    {
    public:
        Catapult() = default;
        virtual void info() const override;
    };
    class Elephant : public Warrior
    {
    public:
        Elephant() = default;
        virtual void info() const override;
    };


    class Army final
    {
    public:
        std::vector < Infantryman > m_i;
        std::vector < Archer >      m_a;
        std::vector < Horseman >    m_h;
        std::vector < Catapult >    m_c;
        std::vector < Elephant >    m_e;
    public:
        Army();
        ~Army();

        void info() const;
    };

}

#endif // USECASE_BUILDER1_H
