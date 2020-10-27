#ifndef MEMENTO1_H
#define MEMENTO1_H

namespace Memento1_ {

    class Memento1;

    class Number
    {
    private:
        int m_value;

    public:
        Number ( int value );
        virtual ~Number();

        int get_number() const;
        void dubble();
        void half();

        Memento1 *create_memento();

        void reinstate_memento ( Memento1 *memento );

    };


    class Memento1
    {
    private:
        int m_state;
    public:
        Memento1 ( int state );
        virtual ~Memento1();

        friend class Number;
    };



    class Command
    {
    public:
        using Action = void ( Number::* ) ();


    private:
        Number *m_reciever;
        Action m_action;

        static Command *s_command_list[20];
        static Memento1 *s_memento_list[20];
        static int s_number_commands;
        static int s_high_water;

    public:
        Command ( Number *reciever, Action action );
        virtual ~Command();

        virtual void execute();
        static void undo();
        static void redo();
    };

}

#endif // MEMENTO1_H
