#ifndef USECASE_PROXY2_H
#define USECASE_PROXY2_H

#include <iostream>

namespace Proxy2_ {

    class Item
    {
    private:
        int m_id;
        static int s_id_generator;

    public:
        Item();
        Item ( const Item &i );

        virtual ~Item();

        Item &operator= ( const Item &i );

        void show_id() const;

    };

}

#endif // USECASE_PROXY2_H
