#include <iostream>
#include <map>
#include <memory>
#include <vector>

// patterns: prototype

enum Warrior_Id
{
    Infantryman_Id,
    Archer_Id,
    Horseman_Id,
};
class Warrior;
using Prototypes = std::map < Warrior_Id, std::unique_ptr < Warrior > >;
Prototypes& getPrototypes()
{
    static Prototypes instance;
    return instance;
}

class Warrior
{
public:
    virtual ~Warrior() {}

    virtual std::unique_ptr < Warrior > clone() const = 0;
    virtual void info() const = 0;

    static std::unique_ptr < Warrior > createWarrior ( Warrior_Id id )
    {
        Prototypes &prototypes = getPrototypes();

        if ( prototypes.find ( id ) != prototypes.cend() )
            return prototypes.at ( id ).get()->clone();

        return nullptr;
    }

    static void addPrototype ( Warrior_Id id, std::unique_ptr < Warrior > prototype )
    {
        Prototypes &prototypes = getPrototypes();
        prototypes.insert (
                    std::pair < Warrior_Id,
                                std::unique_ptr < Warrior > > ( id, std::move ( prototype ) ) );
    }

    static void deletePrototype ( Warrior_Id id )
    {
        Prototypes &prototypes = getPrototypes();
        prototypes.erase ( prototypes.find ( id ) );
    }

};

class OnlyToAddPrototype
{};

class Infantryman : public Warrior
{
public:
    Infantryman() {}
    Infantryman ( OnlyToAddPrototype )
    {
        Warrior::addPrototype ( Warrior_Id::Infantryman_Id,
                                std::make_unique < Infantryman > ( *this ) );
    }

    virtual void info() const override
    {
        std::cout << "Infantryman\n";
    }

    virtual std::unique_ptr < Warrior > clone() const override
    {
        return std::make_unique < Infantryman > ( *this );
    }

private:
    static Infantryman s_prototype;
};

class Horseman : public Warrior
{
public:
    Horseman() {}
    Horseman ( OnlyToAddPrototype )
    {
        Warrior::addPrototype ( Warrior_Id::Horseman_Id,
                                std::make_unique < Horseman > ( *this ) );
    }

    virtual void info() const override
    {
        std::cout << "Horseman\n";
    }

    virtual std::unique_ptr < Warrior > clone() const override
    {
        return std::make_unique < Horseman > ( *this );
    }

private:
    static Horseman s_prototype;
};

class Archer : public Warrior
{
public:
    Archer() {}
    Archer ( OnlyToAddPrototype )
    {
        Warrior::addPrototype ( Warrior_Id::Archer_Id,
                                std::make_unique < Archer > ( *this ) );
    }

    virtual void info() const override
    {
        std::cout << "Archer\n";
    }

    virtual std::unique_ptr < Warrior > clone() const override
    {
        return std::make_unique < Archer > ( *this );
    }

private:
    static Archer s_prototype;
};


Infantryman Infantryman::s_prototype = Infantryman ( OnlyToAddPrototype() );
Horseman       Horseman::s_prototype = Horseman ( OnlyToAddPrototype() );
Archer           Archer::s_prototype = Archer ( OnlyToAddPrototype() );

void testPrototype()
{
    std::vector < std::unique_ptr < Warrior > > vector;
    vector.push_back ( Warrior::createWarrior ( Warrior_Id::Horseman_Id ) );
    vector.push_back ( Warrior::createWarrior ( Warrior_Id::Infantryman_Id ) );
    vector.push_back ( Warrior::createWarrior ( Warrior_Id::Archer_Id ) );
    vector.push_back ( Warrior::createWarrior ( Warrior_Id::Archer_Id ) );
    vector.push_back ( Warrior::createWarrior ( Warrior_Id::Archer_Id ) );
    vector.push_back ( Warrior::createWarrior ( Warrior_Id::Archer_Id ) );
    vector.push_back ( Warrior::createWarrior ( Warrior_Id::Infantryman_Id ) );

    for ( const auto &element : vector )
        if ( element )
            element->info();

    std::cout << "testPrototype(): end\n";
}
int main()
{
    testPrototype();

    std::cout << "main(): end\n";
    return 0;
}
