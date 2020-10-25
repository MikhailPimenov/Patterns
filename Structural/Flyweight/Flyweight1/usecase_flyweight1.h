#ifndef USECASE_FLYWEIGHT1_H
#define USECASE_FLYWEIGHT1_H

#include <iostream>


namespace Flyweight1_ {

    class No_flyweight
    {
    public:
        static int s_x;
        static int s_y;

    private:
        static int s_number;

        int m_first_value;
        int m_second_value;

    public:
        No_flyweight();
        virtual ~No_flyweight();

        void report() const;

    };

}

#endif // USECASE_FLYWEIGHT1_H
