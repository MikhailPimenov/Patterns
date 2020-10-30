#ifndef USECASE_PROTOTYPE1_H
#define USECASE_PROTOTYPE1_H

#include <iostream>
#include <memory>

#include "prototype2.h"

namespace Prototype2_ {


    class Figure
    {
    public:
        Figure();
        virtual ~Figure();
//        Figure ( const Figure & );

        virtual Figure *clone() = 0;
        virtual void print_info() = 0;

        static Figure *create_prototype ( Key_t type );
    protected:
        static void add_prototype ( Figure *prototype, Key_t type );


    };

    class Dummy {};

    class Circle : public Figure
    {
    private:
        static Circle s_prototype;

    public:
        Circle();
        Circle ( Dummy );
        Circle ( const Circle & );
        virtual ~Circle() override;

        virtual Figure *clone() override;

        virtual void print_info() override;

    };

    class Triangle : public Figure
    {
    private:
        static Triangle s_prototype;

    public:
        Triangle();
        Triangle ( Dummy );
        Triangle ( const Triangle & );
        virtual ~Triangle() override;

        virtual Figure *clone() override;

        virtual void print_info() override;
    };

}
#endif // USECASE_PROTOTYPE1_H
