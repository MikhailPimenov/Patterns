#ifndef VISITOR1_H
#define VISITOR1_H


#include <iostream>

namespace Visitor1_ {

    class Figure
    {
    public:
        Figure();
        virtual ~Figure();

        virtual void accept ( class Visitor1 *v ) = 0;
    };
    class Circle : public Figure
    {
    public:
        Circle();
        virtual ~Circle() override;

        virtual void accept ( Visitor1 *v ) override;
        void get_radius() const;
    };
    class Triangle : public Figure
    {
    public:
        Triangle();
        virtual ~Triangle() override;

        virtual void accept ( Visitor1 *v ) override;
        void get_three_sides() const;
    };
    class Foursquare : public Figure
    {
    public:
        Foursquare();
        virtual ~Foursquare() override;

        virtual void accept ( Visitor1 *v ) override;
        void get_side() const;
    };



    class Visitor1
    {
    public:
        Visitor1();
        virtual ~Visitor1();

        virtual void visit ( Circle *c ) = 0;
        virtual void visit ( Triangle *t ) = 0;
        virtual void visit ( Foursquare *f ) = 0;
    };
    class Calculate_square : public Visitor1
    {
    public:
        Calculate_square();
        virtual ~Calculate_square() override;

        virtual void visit ( Circle *c ) override;
        virtual void visit ( Triangle *t ) override;
        virtual void visit ( Foursquare *f ) override;
    };
    class Calculate_perimeter : public Visitor1
    {
    public:
        Calculate_perimeter();
        virtual ~Calculate_perimeter() override;

        virtual void visit ( Circle *c ) override;
        virtual void visit ( Triangle *t ) override;
        virtual void visit ( Foursquare *f ) override;
    };
}

#endif // VISITOR1_H
