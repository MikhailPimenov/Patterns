#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <memory>

class Number;

class Memento
{
private:
    int mValue;
public:
    Memento ( int value );
    virtual ~Memento();

    friend class Number;
};

class Number
{
private:
    int mValue;
public:
    Number ( int value = 0 );
    virtual ~Number();

    int getValue() const;
    void dubble();
    void half();

    std::shared_ptr < Memento > saveMemento() const;
    void loadMemento ( std::shared_ptr < Memento > state );
};

class Command
{
private:
    static std::shared_ptr < Command > s_commands[200];
    static std::shared_ptr < Memento > s_mementos[200];
    static int s_current;
    static int s_max;

    std::shared_ptr < Number > mObject;
    void ( Number:: *mAction )();

public:
    Command ( std::shared_ptr < Number > object,
              void ( Number:: *action )() );
    virtual ~Command();

    void execute();
    static void undo();
    static void redo();
};


#endif // NUMBER_H
