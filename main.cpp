#include <iostream>
#include <map>
#include <memory>
#include <vector>
#include <cassert>

// patterns: composite
enum Unit_Id
{
    Archer_Id,
    Infantryman_Id,
    Horseman_Id,
    All_Id
};
static const int s_strength[All_Id] { 1, 2, 3 };

class Unit
{
public:
    Unit() = default;
    virtual ~Unit() {}

    virtual int getStrength() const = 0;
    virtual void addUnit ( std::unique_ptr < Unit > ) {}
};

class Archer : public Unit
{
public:
    virtual ~Archer() override {}

    virtual int getStrength() const override
    {
        return s_strength[Unit_Id::Archer_Id];
    }

private:
    using Unit::addUnit;
};
class Infantryman : public Unit
{
public:
    virtual ~Infantryman() override {}

    virtual int getStrength() const override
    {
        return s_strength[Unit_Id::Infantryman_Id];
    }

private:
    using Unit::addUnit;
};
class Horseman : public Unit
{
public:
    virtual ~Horseman() override {}

    virtual int getStrength() const override
    {
        return s_strength[Unit_Id::Horseman_Id];
    }

private:
    using Unit::addUnit;
};

class CompositeUnit : public Unit
{
private:
    std::vector < std::unique_ptr < Unit > > mV;

public:
    virtual ~CompositeUnit() override {}

    virtual int getStrength() const override
    {
        int result { 0 };

        for ( const auto &element : mV )
            if ( element )
                result += element.get()->getStrength();

        return result;
    }

    virtual void addUnit ( std::unique_ptr < Unit > unit ) override
    {
        mV.push_back ( std::move ( unit ) );
    }

    void reserve ( int size )
    {
        assert ( size >= 0 );
        if ( static_cast < unsigned long long > ( size ) > mV.size() )
            mV.reserve ( static_cast < unsigned long long > ( size ) );
    }
};


std::unique_ptr < CompositeUnit > createLegion()
{
//    3000 1200 300
    std::unique_ptr < CompositeUnit > legion ( std::make_unique < CompositeUnit > () );
    legion.get()->reserve ( 3000 + 1200 + 300 );

    for ( int count = 0; count < 3000; ++count )
        legion.get()->addUnit ( std::make_unique < Infantryman > () );

    for ( int count = 0; count < 1200; ++count )
        legion.get()->addUnit ( std::make_unique < Archer > () );

    for ( int count = 0; count < 300; ++count )
        legion.get()->addUnit ( std::make_unique < Horseman > () );

    return legion;
}

void testComposite()
{
    std::unique_ptr < CompositeUnit > romanArmy ( std::make_unique < CompositeUnit > () );

    for ( int count = 0; count < 4; ++count )
        romanArmy.get()->addUnit ( createLegion() );

    std::cout << "Roman army strength: " << romanArmy.get()->getStrength() << '\n';

    std::cout << "testComposite(): end\n";
}

int main()
{
    testComposite();
    std::cout << "main(): end\n";
    return 0;
}
