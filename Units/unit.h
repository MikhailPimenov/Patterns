#ifndef UNIT_H
#define UNIT_H

#include <memory>
#include "Items/hemlet_base.h"
#include "Items/sword_base.h"

class Unit
{
protected:
    std::unique_ptr < Hemlet_base > mHemlet;
    std::unique_ptr < Sword_base >  mSword;
public:
    Unit ( std::unique_ptr < Hemlet_base > &hb,
           std::unique_ptr < Sword_base > &sb );

    Unit ( Unit &u );
    virtual ~Unit();

    Unit& operator= ( Unit &u );
    void showItems();

};

#endif // UNIT_H
