#ifndef HANDLERBASE_H
#define HANDLERBASE_H

#include <iostream>
#include <memory>
class HandlerBase
{
private:
    std::weak_ptr < HandlerBase > mHandlerNext;
public:
    HandlerBase();
    virtual ~HandlerBase();

    void setHandlerNext ( std::weak_ptr < HandlerBase > handlerNext );
    void add (std::weak_ptr<HandlerBase> handlerNext );

    virtual void handle ( int i );
};

class Handler1 : public HandlerBase
{
public:
    Handler1();
    virtual ~Handler1() override;

    virtual void handle ( int i ) override;
};

class Handler2 : public HandlerBase
{
public:
    Handler2();
    virtual ~Handler2() override;

    virtual void handle ( int i ) override;
};

class Handler3 : public HandlerBase
{
public:
    Handler3();
    virtual ~Handler3() override;

    virtual void handle ( int i ) override;
};

class Handler4 : public HandlerBase
{
public:
    Handler4();
    virtual ~Handler4() override;

    virtual void handle ( int i ) override;
};

#endif // HANDLERBASE_H
