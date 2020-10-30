#include "usecase_prototype2.h"

namespace Prototype2_ {

    Figure::Figure()
    {}
    Figure::~Figure()
    {}

    Figure *Figure::create_prototype ( Key_t type )
    {
        Registry_t &r = get_registry();

        if ( r.find ( type ) != r.cend() )
            if ( r[type] )
                return r[type]->clone();

        return nullptr;
    }
    void Figure::add_prototype ( Figure *prototype, Key_t type )
    {
        Registry_t &r = get_registry();

        r.insert ( std::pair ( type, prototype ) );
    }



    Circle::Circle()
    {
        std::cout << "Circle acquired\n";
    }
    Circle::Circle ( const Circle & )
    {
        std::cout << "Circle acquired\n";
    }
    Circle::Circle ( Dummy )
    {
        std::cout << "Circle acquired\n";
        this->Figure::add_prototype ( this, Key_t::CIRCLE );
    }
    Circle::~Circle()
    {
        std::cout << "Circle destroyed\n";
    }
    Figure *Circle::clone()
    {
        return new Circle ( *this );
    }
    void Circle::print_info()
    {
        std::cout << "I am circle!\n";
    }



    Triangle::Triangle()
    {
        std::cout << "Triangle acquired\n";
    }
    Triangle::Triangle ( const Triangle & )
    {
        std::cout << "Triangle acquired\n";
    }
    Triangle::Triangle ( Dummy )
    {
        std::cout << "Triangle acquired\n";
        this->Figure::add_prototype ( this, Key_t::TRIANGLE );
    }
    Triangle::~Triangle()
    {
        std::cout << "Triangle destroyed\n";
    }
    Figure *Triangle::clone()
    {
        return new Triangle ( *this );
    }
    void Triangle::print_info()
    {
        std::cout << "I am triangle!\n";
    }

}
