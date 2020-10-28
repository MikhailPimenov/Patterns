#ifndef STRATEGY1_H
#define STRATEGY1_H

#include <iostream>
#include <memory>

namespace Strategy1_ {



    class Strategy1
    {
    public:
        Strategy1();
        virtual ~Strategy1();

        virtual void execute() = 0;
    };

    class Algorythm1 : public Strategy1
    {
    public:
        Algorythm1();
        virtual ~Algorythm1() override;

        virtual void execute() override;
    };

    class Algorythm2 : public Strategy1
    {
    public:
        Algorythm2();
        virtual ~Algorythm2() override;

        virtual void execute() override;
    };

    class Algorythm3 : public Strategy1
    {
    public:
        Algorythm3();
        virtual ~Algorythm3() override;

        virtual void execute() override;
    };



}
#endif // STRATEGY1_H
