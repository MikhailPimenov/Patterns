#ifndef USECASE_PROTOTYPE2_H
#define USECASE_PROTOTYPE2_H

#include "prototype2.h"

namespace Prototype2_ {

    class Dummy {};

    class Figure
    {
    public:
        Figure();
        virtual ~Figure();

        virtual void print_info() const = 0;

        static Figure *get_prototype ( Keys_t type );
    protected:
        static void add_prototype ( Figure *prototype, Keys_t type );
    };


    class Circle : public Figure
    {
    protected:
        static Circle s_prototype;

    public:
        Circle();
        Circle ( Dummy );
        virtual ~Circle() override;

        virtual void print_info() const override;
    };


    class Triangle : public Figure
    {
    protected:
        static Triangle s_prototype;

    public:
        Triangle();
        Triangle ( Dummy );
        virtual ~Triangle() override;

        virtual void print_info() const override;
    };


}
#endif // USECASE_PROTOTYPE2_H
