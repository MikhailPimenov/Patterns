#include "smart_pointer.h"

namespace Proxy2_ {


    template < typename T >
    Smart_pointer < T >::Smart_pointer ( T *pointer )
        : m_pointer { pointer }
    {}


    template < typename T >
    Smart_pointer < T >::~Smart_pointer<T>()
    {
        delete this->m_pointer;
    }


    template < typename T >
    Smart_pointer < T >::Smart_pointer ( const Smart_pointer &p )
    {
        this->m_pointer = new T;

        * ( this->m_pointer ) = * ( p.m_pointer );
    }


    template < typename T >
    Smart_pointer < T >::Smart_pointer ( Smart_pointer &&p )
    {
        this->m_pointer = p.m_pointer;

        p.m_pointer = nullptr;
    }

    template < typename T >
    Smart_pointer < T > &Smart_pointer < T >::operator= ( const Smart_pointer &p )
    {
        if ( &p == this )
            return *this;

        if ( this->m_pointer )
            delete this->m_pointer;

        this->m_pointer = new T;

        * ( this->m_pointer ) = * ( p.m_pointer );

        return *this;
    }

    template < typename T >
    Smart_pointer < T > &Smart_pointer < T >::operator= ( Smart_pointer &&p )
    {
        if ( &p == this )
            return *this;

        if ( this->m_pointer )
            delete this->m_pointer;

        this->m_pointer = p.m_pointer;

        p.m_pointer = nullptr;

        return *this;
    }

    template < typename T >
    T &Smart_pointer < T >::operator*()
    {
        return * ( this->m_pointer );
    }

    template < typename T >
    T *Smart_pointer < T >::operator->()
    {
        return this->m_pointer;
    }


    template < typename T >
    Smart_pointer < T >::operator bool()
    {
        return this->m_pointer != nullptr;
    }
}
