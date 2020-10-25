#ifndef DECORATOR_H
#define DECORATOR_H

#include "usecase_decorator1.h"

namespace Decorator1_ {

    class D: public I
    {
    private:
        I *m_wrappee;

    public:
        D ( I *wrappee );
        virtual ~D() override;

        virtual void do_it() const override = 0;
    };

    class X: public D
    {
    public:
        X ( I *wrappee );
        virtual ~X() override;

        virtual void do_it() const override;
    };

    class W: public D
    {
    public:
        W ( I *wrappee );
        virtual ~W() override;

        virtual void do_it() const override;
    };

    class Y: public D
    {
    public:
        Y ( I *wrappee );
        virtual ~Y() override;

        virtual void do_it() const override;
    };

    class Z: public D
    {
    public:
        Z ( I *wrappee );
        virtual ~Z() override;

        virtual void do_it() const override;
    };

}
#endif // DECORATOR_H
