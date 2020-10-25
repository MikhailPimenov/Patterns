#ifndef USECASE_OBJECT_POOL1_H
#define USECASE_OBJECT_POOL1_H

#include <iostream>
namespace Object_Pool1_ {

    class Resource
    {
    private:
        int m_value;

    public:
        Resource ( int value = 0 );
        virtual ~Resource();

        void reset();
        int get_value() const;
        void set_value ( int value );
    };
}
#endif // USECASE_OBJECT_POOL1_H
