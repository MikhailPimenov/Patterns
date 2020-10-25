#ifndef USECASE_COMPOSITE1_H
#define USECASE_COMPOSITE1_H

#include <cassert>
#include <memory>

namespace Composite1_ {

    class Unit
    {
    public:
        Unit();
        virtual ~Unit();

        virtual void add_unit ( std::unique_ptr < Unit > unit );
        virtual int get_strength() const = 0;
    };

    class Archer : public Unit
    {
    public:
        Archer();
        virtual ~Archer() override;

        virtual int get_strength() const override;
    };

    class Infantryman: public Unit
    {
    public:
        Infantryman();
        virtual ~Infantryman() override;

        virtual int get_strength() const override;
    };

    class Horseman: public Unit
    {
    public:
        Horseman();
        virtual ~Horseman() override;

        virtual int get_strength() const override;
    };

}

#endif // USECASE_COMPOSITE1_H
