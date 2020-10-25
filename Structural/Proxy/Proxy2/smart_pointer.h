#ifndef SMART_POINTER_H
#define SMART_POINTER_H



namespace Proxy2_ {

    template < typename T >
    class Smart_pointer
    {
    private:
        T *m_pointer;
    public:
        Smart_pointer ( T *pointer );
        virtual ~Smart_pointer();

        Smart_pointer ( const Smart_pointer &p );
        Smart_pointer ( Smart_pointer &&p );

        Smart_pointer &operator= ( const Smart_pointer &p );
        Smart_pointer &operator= ( Smart_pointer &&p );

        T &operator*();
        T *operator->();

        operator bool();

    };

}
#endif // SMART_POINTER_H
