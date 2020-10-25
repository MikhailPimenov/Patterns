#include "object_pool1.h"

namespace Object_Pool1_ {

    Object_Pool1::Object_Pool1()
    {
        std::cout << "Object_pool acquired\n";
    }
    Object_Pool1::~Object_Pool1()
    {
        std::cout << "Object_pool destroyed\n";
    }

    Object_Pool1 &Object_Pool1::get_instance()
    {
        static Object_Pool1 single_instance;
        return single_instance;
    }

    std::unique_ptr < Resource > Object_Pool1::get_resource()
    {
        if ( this->m_pool.empty() ) {
            std::cout << "Pool is empty. Creating new resource\n";
            return std::make_unique < Resource > ( 0 );
        }

        std::cout << "Getting resource from the pool\n";
        std::unique_ptr < Resource > object = std::move ( this->m_pool.front() );
        this->m_pool.pop_front();
        return object;
    }
    void Object_Pool1::return_resource ( std::unique_ptr<Resource> resource )
    {
        std::cout << "Returning resource back to the pool\n";
        resource.get()->reset();
        this->m_pool.push_back ( std::move ( resource ) );
    }
}
