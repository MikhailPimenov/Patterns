#ifndef DECORATOR2_H
#define DECORATOR2_H

#include <memory>

#include "usecase_decorator2.h"

namespace Decorator2_ {


    class Decorator2 : public I
    {
    private:
        std::unique_ptr < I > m_wrappee;
    public:
        Decorator2 ( std::unique_ptr < I > wrappee );
        virtual ~Decorator2() override;

        virtual void count_me() override;
    };

    class Counter : public Decorator2
    {
    public:
        Counter ( std::unique_ptr < I > wrappee );
        virtual ~Counter() override;

        virtual void count_me() override;
    };

}
#endif // DECORATOR2_H
