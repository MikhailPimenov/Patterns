#ifndef USECASE_OBSERVER1_H
#define USECASE_OBSERVER1_H

#include <iostream>

namespace Observer1_ {

    class No_observer_divisor
    {
    private:
        int m_divisor;

    public:
        No_observer_divisor ( int divisor );
        virtual ~No_observer_divisor();

        void update ( int value );
        int get_divisor() const;
        void set_divisor ( int divisor );
    };


    class No_observer_module
    {
    private:
        int m_divisor;

    public:
        No_observer_module ( int divisor );
        virtual ~No_observer_module();

        void update ( int value );
        int get_divisor() const;
        void set_divisor ( int divisor );
    };

    class No_observer_subject
    {
    private:
        No_observer_divisor m_divisor;
        No_observer_module m_module;
        int m_value;

    public:
        No_observer_subject ( int value );
        virtual ~No_observer_subject();

        int get_value() const;
        void set_value ( int value );
        int get_divisor() const;
        void set_divisor ( int divisor );

    };

}
#endif // USECASE_OBSERVER1_H
