#ifndef SWORDHEAVY_H
#define SWORDHEAVY_H

#include "sword_base.h"

class SwordHeavy : public Sword_base
{
public:
    SwordHeavy();
    virtual ~SwordHeavy() override;

    virtual void draw() const override;
};

#endif // SWORDHEAVY_H
