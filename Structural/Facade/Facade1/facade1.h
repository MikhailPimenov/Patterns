#ifndef FACADE1_H
#define FACADE1_H

#include "usecase_facade1.h"

namespace Facade1_ {


    class Facade
    {
    private:
        Red_balls m_rb;
        Green_balls m_gb;
        Blue_balls m_bb;
        Yellow_balls m_yb;
    public:
        Facade();
        virtual ~Facade();

        void reset_counter();
        void increase_counter();
        bool get_state();

        operator bool();
    };

}
#endif // FACADE1_H
