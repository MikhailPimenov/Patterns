#ifndef UNITLIGHTFACTORY_H
#define UNITLIGHTFACTORY_H

#include "UnitFactory/abstract_unitfactory.h"
#include "Items/hemletlight.h"
#include "Items/swordlight.h"
#include "Units/unit.h"

class UnitLightFactory : public Abstract_UnitFactory
{
public:
    UnitLightFactory();
    virtual ~UnitLightFactory() override;

    virtual std::unique_ptr < Unit > create() const override;

    friend void getUnit ( std::unique_ptr < Abstract_UnitFactory > ufb );
};

#endif // UNITLIGHTFACTORY_H
