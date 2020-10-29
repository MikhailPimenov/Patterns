#include "visitor1.h"

namespace Visitor1_ {

    Figure::Figure()
    {}
    Figure::~Figure()
    {}

    Circle::Circle()
    {}
    Circle::~Circle()
    {}
    void Circle::accept ( Visitor1 *v )
    {
        v->visit ( this );
    }
    void Circle::get_radius() const
    {
        std::cout << "radius of circle\n";
    }

    Triangle::Triangle()
    {}
    Triangle::~Triangle()
    {}
    void Triangle::accept ( Visitor1 *v )
    {
        v->visit ( this );
    }
    void Triangle::get_three_sides() const
    {
        std::cout << "three sides of triangle\n";
    }

    Foursquare::Foursquare()
    {}
    Foursquare::~Foursquare()
    {}
    void Foursquare::accept ( Visitor1 *v )
    {
        v->visit ( this );
    }
    void Foursquare::get_side() const
    {
        std::cout << "side of foursquare\n";
    }



    Visitor1::Visitor1()
    {}
    Visitor1::~Visitor1()
    {}

    Calculate_square::Calculate_square()
    {}
    Calculate_square::~Calculate_square()
    {}
    void Calculate_square::visit ( Circle *c )
    {
        std::cout << "Calculating square of circle using:\n";
        c->get_radius();
    }
    void Calculate_square::visit ( Triangle *t )
    {
        std::cout << "Calculating square of triangle using:\n";
        t->get_three_sides();
    }
    void Calculate_square::visit ( Foursquare *f )
    {
        std::cout << "Calculating square of foursquare using:\n";
        f->get_side();
    }

    Calculate_perimeter::Calculate_perimeter()
    {}
    Calculate_perimeter::~Calculate_perimeter()
    {}
    void Calculate_perimeter::visit ( Circle *c )
    {
        std::cout << "Calculating perimeter of circle using:\n";
        c->get_radius();
    }
    void Calculate_perimeter::visit ( Triangle *t )
    {
        std::cout << "Calculating perimeter of triangle using:\n";
        t->get_three_sides();
    }
    void Calculate_perimeter::visit ( Foursquare *f )
    {
        std::cout << "Calculating perimeter of foursquare using:\n";
        f->get_side();
    }

}
