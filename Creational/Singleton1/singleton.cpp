#include "singleton.h"

Singleton &Singleton::get_instance()
{
    static Singleton the_only_instance;
    return the_only_instance;
}
