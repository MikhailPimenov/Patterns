#include "decorator2.h"
namespace Decorator2_ {

    Decorator2::Decorator2 ( std::unique_ptr < I > wrappee )
        : m_wrappee { std::move ( wrappee ) }
    {}
    Decorator2::~Decorator2()
    {}
    void Decorator2::count_me()
    {
        this->m_wrappee.get()->count_me();
    }


    Counter::Counter ( std::unique_ptr < I > wrappee )
        : Decorator2 { std::move ( wrappee ) }
    {}
    Counter::~Counter()
    {}
    void Counter::count_me()
    {
        static int counter_from_decorator { 0 };
        std::cout << "I am functionality from decorator: ";
        std::cout << "counter_from_decorator = " << ( ++counter_from_decorator ) << '\n';
        this->Decorator2::count_me();
    }

}
