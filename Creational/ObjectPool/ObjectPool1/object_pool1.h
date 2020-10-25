#ifndef OBJECT_POOL1_H
#define OBJECT_POOL1_H

#include <iostream>
#include <list>
#include <memory>

#include "usecase_object_pool1.h"

namespace Object_Pool1_ {


    class Object_Pool1
    {
    private:
        std::list < std::unique_ptr < Resource > > m_pool;
//    static Object_Pool1& s_single_instance;
        Object_Pool1();
    public:
        static Object_Pool1 &get_instance();
        virtual ~Object_Pool1();

        std::unique_ptr < Resource > get_resource();
        void return_resource ( std::unique_ptr < Resource > resource );
    };
}
#endif // OBJECT_POOL1_H
