#ifndef SWORD_BASE_H
#define SWORD_BASE_H

#include "item.h"

class Sword_base : public Item
{
protected:
    int mDamage;
public:
    Sword_base ( int damage = 40 );
    virtual ~Sword_base() override;

    virtual void draw() const override = 0;
};

#endif // SWORD_BASE_H
