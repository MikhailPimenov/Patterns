#ifndef OBSERVER1_H
#define OBSERVER1_H

#include <iostream>
#include <vector>

namespace Observer1_ {

    class Subject
    {
    private:
        int m_value;
        std::vector < class Observer1 * > m_viewers;

    public:
        Subject ( int value );
        virtual ~Subject();

        void attach ( Observer1 *observer );
        void set_value ( int value );
        int get_value() const;
        virtual void update();
    };

    class Observer1
    {
    private:
        Subject *m_subject;
        int m_divisor;

    public:
        Observer1 ( Subject *subject );
        virtual ~Observer1();

        void set_divisor ( int divisor );
        int get_divisor() const;
        virtual void update() = 0;
    protected:
        Subject *get_subject() const;

    };

    class Divisor_observer1 : public Observer1
    {
    public:
        Divisor_observer1 ( Subject *observer );
        virtual ~Divisor_observer1() override;

        virtual void update() override;

    };

    class Module_observer1 : public Observer1
    {
    public:
        Module_observer1 ( Subject *observer );
        virtual ~Module_observer1() override;

        virtual void update() override;

    };



}

#endif // OBSERVER1_H
