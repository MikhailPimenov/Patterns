#include <iostream>
#include <map>
#include <memory>
#include <vector>

// patterns: prototype

#include "Creational/prototype/prototype1/test_prototype1.h"

//enum Warrior_ID {
//    Infantryman_ID,
//    Archer_ID,
//    Horseman_ID,
//    All_ID,
//};

//class Warrior;
//using Registry_t = std::map < Warrior_ID,   Warrior *  >;

//Registry_t &get_registry()
//{
//    static Registry_t single_instance;
//    return single_instance;
//}

//class Dummy {};

//class Warrior
//{
//public:
//    virtual std::unique_ptr < Warrior > clone() = 0;
//    virtual void info() = 0;
//    virtual ~Warrior() = default;

//    static std::unique_ptr < Warrior > create_warrior ( Warrior_ID id )
//    {
//        Registry_t &r = get_registry();

//        if ( r.find ( id ) != r.cend() )
//            return r[id]->clone();

//        return nullptr;
//    }


//protected:
//    Warrior() {}
//    void add_prototype ( Warrior_ID id, Warrior *prototype )
//    {
//        Registry_t &r = get_registry();
//        r[id] = prototype;
//    }
//    void remove_prototype ( Warrior_ID id )
//    {
//        Registry_t &r = get_registry();
//        r.erase ( r.find ( id ) );
//    }
//};
//class Infantryman : public Warrior
//{
//public:
//    Infantryman() {}
//    virtual void info() override
//    {
//        std::cout << "Infantryman\n";
//    }
//    virtual std::unique_ptr < Warrior > clone() override
//    {
//        return std::make_unique < Infantryman > ( *this );
//    }

//protected:
//    Infantryman ( Dummy )
//    {
//        Warrior::add_prototype ( Warrior_ID::Infantryman_ID, this );
//    }
//    static Infantryman prototype;
//};

//class Archer : public Warrior
//{
//public:
//    Archer() {}
//    virtual void info() override
//    {
//        std::cout << "Archer\n";
//    }
//    virtual std::unique_ptr < Warrior > clone() override
//    {
//        return std::make_unique < Archer > ( *this );
//    }

//protected:
//    Archer ( Dummy )
//    {
//        Warrior::add_prototype ( Warrior_ID::Archer_ID, this );
//    }
//    static Archer prototype;
//};

//Infantryman Infantryman::prototype = Infantryman ( Dummy() );
//Archer Archer::prototype = Archer ( Dummy() );


//void test_prototype()
//{
//    std::cout << "test_prototype(): start\n";

//    std::vector < std::unique_ptr < Warrior > > vector;
//    vector.push_back ( Warrior::create_warrior ( Warrior_ID::Infantryman_ID ) );
//    vector.push_back ( Warrior::create_warrior ( Warrior_ID::Infantryman_ID ) );
//    vector.push_back ( Warrior::create_warrior ( Warrior_ID::Archer_ID ) );
//    vector.push_back ( Warrior::create_warrior ( Warrior_ID::Archer_ID ) );
//    vector.push_back ( Warrior::create_warrior ( Warrior_ID::Infantryman_ID ) );

//    for ( const auto &element : vector )
//        element.get()->info();


//    std::cout << "test_prototype(): end\n";
//}

int main()
{
    Prototype1_::test_prototype();

    std::cout << "main(): end\n";

    return 0;
}
