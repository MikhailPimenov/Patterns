#ifndef USECASE_FACADE1_H
#define USECASE_FACADE1_H

namespace Facade1_ {

    class Red_balls
    {
    private:
        int m_counter;

    public:
        Red_balls();
        virtual ~Red_balls();

        void reset_counter();
        void increase_counter();
        bool get_state();

        operator bool();
    };

    class Green_balls
    {
    private:
        int m_counter;

    public:
        Green_balls();
        virtual ~Green_balls();

        void reset_counter();
        void increase_counter();
        bool get_state();

        operator bool();
    };

    class Blue_balls
    {
    private:
        int m_counter;

    public:
        Blue_balls();
        virtual ~Blue_balls();

        void reset_counter();
        void increase_counter();
        bool get_state();

        operator bool();
    };


    class Yellow_balls
    {
    private:
        int m_counter;

    public:
        Yellow_balls();
        virtual ~Yellow_balls();

        void reset_counter();
        void increase_counter();
        bool get_state();

        operator bool();
    };




}
#endif // USECASE_FACADE1_H
