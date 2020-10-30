#include "usecase_prototype2.h"
namespace Prototype2_ {


    Figure::Figure()
    {}
    Figure::~Figure()
    {}
    void Figure::add_prototype ( Figure *prototype, Keys_t type )
    {
        Prototypes_t &prototypes = get_prototypes();
        prototypes.insert ( std::pair < Keys_t, Figure * > ( type, prototype ) );
    }
    Figure *Figure::get_prototype ( Keys_t key )
    {
        Prototypes_t &prototypes = get_prototypes();

        if ( prototypes.find ( key ) != prototypes.cend() )
            return prototypes.at ( key );

        return nullptr;
    }




    Circle::Circle()
    {
        std::cout << "Circle acquired\n";
    }
    Circle::Circle ( Dummy )
    {
        Circle *p = new Circle;
        this->add_prototype ( p, Keys_t::CIRCLE );
    }
    Circle::~Circle()
    {
        std::cout << "Circle destroyed\n";
    }
    void Circle::print_info() const
    {
        std::cout << "I am circle!\n";
    }




    Triangle::Triangle()
    {
        std::cout << "Triangle acquired\n";
    }
    Triangle::Triangle ( Dummy )
    {
        Triangle *p = new Triangle;
        this->add_prototype ( p, Keys_t::TRIANGLE );
    }
    Triangle::~Triangle()
    {
        std::cout << "Triangle destroyed\n";
    }
    void Triangle::print_info() const
    {
        std::cout << "I am triangle!\n";
    }



}
