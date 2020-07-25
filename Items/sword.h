#ifndef SWORD_H
#define SWORD_H


#include "sword_base.h"

class Sword : public Sword_base
{
public:
    Sword();
    virtual ~Sword() override;

    virtual void draw() const override;
};

#endif // SWORD_H
