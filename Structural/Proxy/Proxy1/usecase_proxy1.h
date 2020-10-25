#ifndef USECASE_PROXY1_H
#define USECASE_PROXY1_H

#include <iostream>

namespace Proxy1_ {

    class No_proxy_image
    {
    private:
        static int s_id_generator;
        int m_id;

    public:
        No_proxy_image();
        virtual ~No_proxy_image();

        void draw() const;
    };


    class Image
    {
    private:
        int m_id;

    public:
        Image ( int id );
        virtual ~Image();

        void draw() const;
    };

}
#endif // USECASE_PROXY1_H
