#ifndef SWORDLIGHT_H
#define SWORDLIGHT_H

#include "sword_base.h"

class SwordLight : public Sword_base
{
public:
    SwordLight();
    virtual ~SwordLight() override;

    virtual void draw() const override;
};

#endif // SWORDLIGHT_H
