#ifndef USECASE_DECORATOR2_H
#define USECASE_DECORATOR2_H

#include <iostream>

namespace Decorator2_ {

    class I
    {
    public:
        I();
        virtual ~I();

        virtual void count_me() = 0;
    };

    class A : public I
    {
    public:
        A();
        virtual ~A() override;

        virtual void count_me() override;
    };

}
#endif // USECASE_DECORATOR2_H
