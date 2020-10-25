#ifndef CHAIN_OF_RESPONSIBILITY_H
#define CHAIN_OF_RESPONSIBILITY_H

#include <iostream>

namespace Chain_of_responsibility1_ {

    class Base_handler
    {
    private:
        Base_handler *m_next;

    public:
        Base_handler();
        virtual ~Base_handler();

        void set_next ( Base_handler *next );
        void add ( Base_handler *next );

        virtual void handle ( int request ) const;
    };


    class Handler1 : public Base_handler
    {
    public:
        Handler1();
        virtual ~Handler1() override;

        virtual void handle ( int request ) const override;
    };


    class Handler2 : public Base_handler
    {
    public:
        Handler2();
        virtual ~Handler2() override;

        virtual void handle ( int request ) const override;
    };


    class Handler3 : public Base_handler
    {
    public:
        Handler3();
        virtual ~Handler3() override;

        virtual void handle ( int request ) const override;
    };


    class Handler4 : public Base_handler
    {
    public:
        Handler4();
        virtual ~Handler4() override;

        virtual void handle ( int request ) const override;
    };


}
#endif // CHAIN_OF_RESPONSIBILITY_H
