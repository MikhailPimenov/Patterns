#ifndef ABSTRACT_UNITFACTORY_H
#define ABSTRACT_UNITFACTORY_H

#include <memory>
#include "Units/unit.h"

class Abstract_UnitFactory
{
public:
    Abstract_UnitFactory();
    virtual ~Abstract_UnitFactory();

    virtual std::unique_ptr < Unit > create() const = 0;

    friend void getUnit ( const Abstract_UnitFactory &ufb );
};

#endif // ABSTRACT_UNITFACTORY_H
