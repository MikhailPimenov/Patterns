#ifndef UNITFACTORY_H
#define UNITFACTORY_H

#include "abstract_unitfactory.h"
#include "Items/hemlet.h"
#include "Items/sword.h"

class UnitFactory : public Abstract_UnitFactory
{
public:
    UnitFactory();
    virtual ~UnitFactory() override;

    virtual std::unique_ptr < Unit > create() const override;
};

#endif // UNITFACTORY_H
