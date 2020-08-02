#include "handlerbase.h"

HandlerBase::HandlerBase() : mHandlerNext{}
{
}
HandlerBase::~HandlerBase()
{
}
void HandlerBase::setHandlerNext ( std::weak_ptr < HandlerBase > handlerNext )
{
    mHandlerNext = std::move ( handlerNext );
}
void HandlerBase::add ( std::weak_ptr < HandlerBase > handlerNext )
{
    if ( ! mHandlerNext.lock() )
        mHandlerNext = std::move ( handlerNext );
    else
        mHandlerNext.lock().get()->add ( handlerNext );
}
void HandlerBase::handle ( int i )
{
    mHandlerNext.lock().get()->handle ( i );
}

Handler1::Handler1()
{}
Handler1::~Handler1()
{}
void Handler1::handle ( int i )
{
    if ( rand() % 4 )
    {
        std::cout << "H1 passed " << i << "  ";
        HandlerBase::handle ( i );
    }
    else
    {
        std::cout << "H1 handled " << i << '\n';
    }
}

Handler2::Handler2()
{}
Handler2::~Handler2()
{}
void Handler2::handle ( int i )
{
    if ( rand() % 4 )
    {
        std::cout << "H2 passed " << i << "  ";
        HandlerBase::handle ( i );
    }
    else
    {
        std::cout << "H2 handled " << i << '\n';
    }
}

Handler3::Handler3()
{}
Handler3::~Handler3()
{}
void Handler3::handle ( int i )
{
    if ( rand() % 4 )
    {
        std::cout << "H3 passed " << i << "  ";
        HandlerBase::handle ( i );
    }
    else
    {
        std::cout << "H3 handled " << i << '\n';
    }
}

Handler4::Handler4()
{}
Handler4::~Handler4()
{}
void Handler4::handle ( int i )
{
    if ( rand() % 4 )
    {
        std::cout << "H4 passed " << i << "  ";
        HandlerBase::handle ( i );
    }
    else
    {
        std::cout << "H4 handled " << i << '\n';
    }
}

