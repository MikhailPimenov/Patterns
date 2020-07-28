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
using Prototypes = std::map < Warrior_Id, Warrior * >;
Prototypes& getPrototypes()
{
    static Prototypes instance;
    return instance;
}




class Warrior
{
public:
    virtual ~Warrior() {}

    virtual Warrior* clone() const = 0;
    virtual void info() const = 0;

    static Warrior* createWarrior ( Warrior_Id id )
    {
        Prototypes &prototypes = getPrototypes();

        if ( prototypes.find ( id ) != prototypes.cend() )
            return prototypes.at ( id )->clone();

        return nullptr;
    }

    static void addPrototype ( Warrior_Id id, Warrior *prototype )
    {
        Prototypes &prototypes = getPrototypes();
        prototypes.insert ( std::pair < Warrior_Id, Warrior * > ( id, prototype ) );
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
        Warrior::addPrototype ( Infantryman_Id, this );
    }

    virtual void info() const override
    {
        std::cout << "Infantryman\n";
    }

    virtual Warrior* clone() const override
    {
        return new Infantryman ( *this );
    }

private:
    static Infantryman s_prototype;
};

Infantryman Infantryman::s_prototype = Infantryman ( OnlyToAddPrototype() );

void testPrototype()
{
    std::vector < Warrior * > vector;
    vector.push_back ( Warrior::createWarrior ( Infantryman_Id ) );
    vector.push_back ( Warrior::createWarrior ( Infantryman_Id ) );
    vector.push_back ( Warrior::createWarrior ( Infantryman_Id ) );
    vector.push_back ( Warrior::createWarrior ( Infantryman_Id ) );

    for ( const auto &element : vector )
        element->info();
}
int main()
{
    testPrototype();
    return 0;
}
