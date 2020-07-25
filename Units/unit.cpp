#include "unit.h"

Unit::Unit ( std::unique_ptr < Hemlet_base > &hb,
             std::unique_ptr < Sword_base > &sb )
    : mHemlet { std::move ( hb ) }, mSword { std::move ( sb ) }
{
}

Unit::Unit ( Unit &u )
    : mHemlet { std::move ( u.mHemlet ) }, mSword { std::move ( u.mSword ) }
{
}

Unit::~Unit()
{
}

Unit& Unit::operator= ( Unit &u )
{
    if ( &u == this )
        return *this;

    this->mSword  = std::move ( u.mSword );
    this->mHemlet = std::move ( u.mHemlet );

    return *this;
}

void Unit::showItems()
{
    std::cout << "I am Unit. I have:\n";
    mHemlet->draw();
    mSword->draw();
}
