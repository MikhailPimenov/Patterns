#ifndef SINGLETON_H
#define SINGLETON_H

#include <new>

class Singleton final
{
private:
    Singleton() = default;
    ~Singleton() = default;

public:

    Singleton ( const Singleton & ) = delete;
    Singleton &operator= ( const Singleton & ) = delete;

    void *operator new ( std::size_t ) = delete;
    void *operator new[] ( std::size_t ) = delete;

    void operator delete ( void * ) = delete;
    void operator delete[] ( void * ) = delete;

    static Singleton &get_instance();
};

#endif // SINGLETON_H
