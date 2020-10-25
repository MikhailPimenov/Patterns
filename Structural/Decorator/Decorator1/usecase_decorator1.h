#ifndef USECASE_DECORATOR1_H
#define USECASE_DECORATOR1_H

#include <iostream>

namespace Decorator1_ {

    class I
    {
    public:
        I();
        virtual ~I();

        virtual void do_it() const = 0;
    };

    class A: public I
    {
    public:
        A();
        virtual ~A() override;

        virtual void do_it() const override;
    };

}
#endif // USECASE_DECORATOR1_H
