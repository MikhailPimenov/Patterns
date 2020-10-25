#ifndef FLYWEIGHT1_H
#define FLYWEIGHT1_H

#include <cassert>
#include <iostream>

namespace Flyweight1_ {

    class Flyweight1
    {
    public:
        static int s_x;


    private:
        static int s_number;

        int m_first_value;


    public:
        Flyweight1 ( int first_value );
        virtual ~Flyweight1();

        void report ( int second_value ) const;

    };

    class Factory
    {
    public:
        Factory();
        virtual ~Factory();



        static Flyweight1 **get_pool();
        static Flyweight1 *get_flyweight ( int first_value );

        static void clean_pool();

    };

}
#endif // FLYWEIGHT1_H
