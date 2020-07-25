#ifndef UNITHEAVYFACTORY_H
#define UNITHEAVYFACTORY_H

#include "abstract_unitfactory.h"
#include "Items/hemletheavy.h"
#include "Items/swordheavy.h"

class UnitHeavyFactory : public Abstract_UnitFactory
{
public:
    UnitHeavyFactory();
    virtual ~UnitHeavyFactory() override;

    virtual std::unique_ptr < Unit > create() const override;
};

#endif // UNITHEAVYFACTORY_H
