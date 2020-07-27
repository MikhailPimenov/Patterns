#include <iostream>
#include <memory>
#include <vector>

// patterns: builder part2

class Infantryman
{
public:
    void info() const
    {
        std::cout << "Infantryman\n";
    }
};
class Archer
{
public:
    void info() const
    {
        std::cout << "Archer\n";
    }
};
class Horseman
{
public:
    void info() const
    {
        std::cout << "Horseman\n";
    }
};
class Catapult
{
public:
    void info() const
    {
        std::cout << "Catapult\n";
    }
};
class Elephant
{
public:
    void info() const
    {
        std::cout << "Elephant\n";
    }
};


class Army
{
private:
    std::vector < Infantryman > mI;
    std::vector < Archer >      mA;
    std::vector < Horseman >    mH;
    std::vector < Catapult >    mC;
    std::vector < Elephant >    mE;

public:
    Army ( const std::vector < Infantryman > &i,
           const std::vector < Archer >      &a,
           const std::vector < Horseman >    &h,
           const std::vector < Catapult >    &c,
           const std::vector < Elephant >    &e )
        : mI { i }, mA { a }, mH { h }, mC { c }, mE { e }
    {}

    void info() const
    {
        if ( mI.size() )
            mI.at ( 0 ).info();
        if ( mA.size() )
            mA.at ( 0 ).info();
        if ( mH.size() )
            mH.at ( 0 ).info();
        if ( mC.size() )
            mC.at ( 0 ).info();
        if ( mE.size() )
            mE.at ( 0 ).info();
    }
};

class ArmyBuilder
{
protected:
    std::vector < Infantryman > mI;
    std::vector < Archer >      mA;
    std::vector < Horseman >    mH;
    std::vector < Catapult >    mC;
    std::vector < Elephant >    mE;

public:
    ArmyBuilder() = default;
    virtual ~ArmyBuilder() {}

    virtual void infantryman() {}
    virtual void archer() {}
    virtual void horseman() {}
    virtual void catapult() {}
    virtual void elephant() {}
    virtual std::unique_ptr < Army > build() = 0;

};

class RomanArmyBuilder : public ArmyBuilder
{
public:
    RomanArmyBuilder() = default;
    virtual ~RomanArmyBuilder() override {}

    virtual std::unique_ptr < Army > build() override
    {
        infantryman();
        archer();
        horseman();
        catapult();


        std::unique_ptr < Army > army (
                    std::make_unique < Army > (
                                                this->mI,
                                                this->mA,
                                                this->mH,
                                                this->mC,
                                                this->mE )
                                              );
        return army;
    }

private:
    virtual void infantryman() override
    {
        this->mI.push_back ( Infantryman() );
    }
    virtual void archer() override
    {
        this->mA.push_back ( Archer() );
    }
    virtual void horseman() override
    {
        this->mH.push_back ( Horseman() );
    }
    virtual void catapult() override
    {
        this->mC.push_back ( Catapult() );
    }

};

class CarthagenianArmyBuilder : public ArmyBuilder
{
public:
    CarthagenianArmyBuilder() = default;
    virtual ~CarthagenianArmyBuilder() override {}

    virtual std::unique_ptr < Army > build () override
    {
        infantryman();
        archer();
        horseman();
        elephant();

        std::unique_ptr < Army > army (
                    std::make_unique < Army > (
                                                this->mI,
                                                this->mA,
                                                this->mH,
                                                this->mC,
                                                this->mE )
                                              );
        return army;
    }

private:
    virtual void infantryman() override
    {
        this->mI.push_back ( Infantryman() );
    }
    virtual void archer() override
    {
        this->mA.push_back ( Archer() );
    }
    virtual void horseman() override
    {
        this->mH.push_back ( Horseman() );
    }
    virtual void elephant() override
    {
        this->mE.push_back ( Elephant() );
    }
};

class Director
{
private:
    ArmyBuilder *mArmyBuilder;

public:
    Director() = default;

    void setArmyBuilder ( ArmyBuilder *armyBuilder )
    {
        mArmyBuilder = armyBuilder;
    }

    std::unique_ptr < Army > getArmy() const
    {
        return mArmyBuilder->build();
    }
};

void testBuilder()
{
    RomanArmyBuilder rab;
    CarthagenianArmyBuilder cab;

    Director director;
    director.setArmyBuilder ( &rab );
    std::unique_ptr < Army > ra = director.getArmy();

    director.setArmyBuilder ( &cab );
    std::unique_ptr < Army > ca = director.getArmy();

    std::cout << "\nRoman army:\n";
    ra.get()->info();
    std::cout << "\nCarthagenian army:\n";
    ca.get()->info();

}
int main()
{
    testBuilder();
    return 0;
}
