#ifndef TEMPLATE_METHOD1_H
#define TEMPLATE_METHOD1_H

#include <iostream>

namespace Template_method1_ {



    class Template_method1
    {
    public:
        Template_method1();
        virtual ~Template_method1();

        void execute();
        void execute_part1();
        virtual void execute_part2() = 0;
        void execute_part3();
    };

    class Variant1 : public Template_method1
    {
    public:
        Variant1();
        virtual ~Variant1() override;

        virtual void execute_part2() override;
    };

    class Variant2 : public Template_method1
    {
    public:
        Variant2();
        virtual ~Variant2() override;

        virtual void execute_part2() override;
    };

    class Variant3 : public Template_method1
    {
    public:
        Variant3();
        virtual ~Variant3() override;

        virtual void execute_part2() override;
    };


}
#endif // TEMPLATE_METHOD1_H
