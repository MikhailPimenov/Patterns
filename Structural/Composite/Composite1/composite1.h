#ifndef COMPOSITE_H
#define COMPOSITE_H


#include <vector>

#include "usecase_composite1.h"

namespace Composite1_ {


    class Composite : public Unit
    {
    private:
        std::vector < std::unique_ptr < Unit > > m_units;
    public:
        Composite();
        virtual ~Composite() override;

        virtual void add_unit ( std::unique_ptr < Unit > unit ) override;
        virtual int get_strength() const override;

    };


    std::unique_ptr < Unit > create_legion();

}
#endif // COMPOSITE_H
