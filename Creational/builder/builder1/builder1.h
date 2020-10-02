#ifndef BUILDER1_H
#define BUILDER1_H

#include "usecase_builder1.h"

#include <memory>

class Builder1
{
protected:
    std::shared_ptr < Builder1_::Army > m_army;
public:
    Builder1() = default;
    virtual ~Builder1() = default;

    virtual void create_army();
    virtual void build_infantryman() {}
    virtual void build_archer() {}
    virtual void build_horseman() {}
    virtual void build_catapult() {}
    virtual void build_elephant() {}

    virtual std::shared_ptr < Builder1_::Army > get_army() const;
};

class RomanArmyBuilder1 : public Builder1
{
public:
    RomanArmyBuilder1() = default;
    virtual ~RomanArmyBuilder1() override = default;


    virtual void create_army()       override;
    virtual void build_infantryman() override;
    virtual void build_archer()      override;
    virtual void build_horseman()    override;
    virtual void build_catapult()    override;

    virtual std::shared_ptr < Builder1_::Army > get_army() const override;
};

class CarthagenianArmyBuilder1 : public Builder1
{
public:
    CarthagenianArmyBuilder1() = default;
    virtual ~CarthagenianArmyBuilder1() override = default;


    virtual void create_army()       override;
    virtual void build_infantryman() override;
    virtual void build_archer()      override;
    virtual void build_horseman()    override;
    virtual void build_elephant()    override;

    virtual std::shared_ptr < Builder1_::Army > get_army() const override;
};


class Director final
{
public:
    Director() = default;
    std::shared_ptr < Builder1_::Army > build ( Builder1 &builder );

};

#endif // BUILDER1_H
