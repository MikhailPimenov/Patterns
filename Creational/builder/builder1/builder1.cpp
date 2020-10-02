#include "builder1.h"

void Builder1::create_army()
{
    this->m_army = std::make_shared < Builder1_::Army > ();
}

std::shared_ptr < Builder1_::Army > Builder1::get_army() const
{
    return this->m_army;
}

void RomanArmyBuilder1::create_army()
{
    Builder1::create_army();
}

std::shared_ptr < Builder1_::Army > RomanArmyBuilder1::get_army() const
{
    return Builder1::get_army();
}

void RomanArmyBuilder1::build_infantryman()
{
    this->m_army.get()->m_i.push_back ( Builder1_::Infantryman() );
}
void RomanArmyBuilder1::build_archer()
{
    this->m_army.get()->m_a.push_back ( Builder1_::Archer() );
}
void RomanArmyBuilder1::build_horseman()
{
    this->m_army.get()->m_h.push_back ( Builder1_::Horseman() );
}
void RomanArmyBuilder1::build_catapult()
{
    this->m_army.get()->m_c.push_back ( Builder1_::Catapult() );
}


void CarthagenianArmyBuilder1::create_army()
{
    Builder1::create_army();
}

void CarthagenianArmyBuilder1::build_infantryman()
{
    this->m_army.get()->m_i.push_back ( Builder1_::Infantryman() );
}
void CarthagenianArmyBuilder1::build_archer()
{
    this->m_army.get()->m_a.push_back ( Builder1_::Archer() );
}
void CarthagenianArmyBuilder1::build_horseman()
{
    this->m_army.get()->m_h.push_back ( Builder1_::Horseman() );
}
void CarthagenianArmyBuilder1::build_elephant()
{
    this->m_army.get()->m_e.push_back ( Builder1_::Elephant() );
}

std::shared_ptr < Builder1_::Army > CarthagenianArmyBuilder1::get_army() const
{
    return Builder1::get_army();
}


std::shared_ptr < Builder1_::Army > Director::build ( Builder1 &builder )
{
    builder.create_army();
    builder.build_infantryman();
    builder.build_archer();
    builder.build_horseman();
    builder.build_catapult();
    builder.build_elephant();
    return builder.get_army();
}
