#ifndef PROXY1_H
#define PROXY1_H

#include "usecase_proxy1.h"

namespace Proxy1_ {



    class Proxy1
    {
    private:
        Image *m_object;
        int m_id;
        static int s_id_generator;

    public:
        Proxy1();
        virtual ~Proxy1();

        void draw();
    };

}
#endif // PROXY1_H
