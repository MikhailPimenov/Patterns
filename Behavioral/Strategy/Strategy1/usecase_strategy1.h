#ifndef USECASE_STRATEGY1_H
#define USECASE_STRATEGY1_H

#include <memory>

#include "strategy1.h"

namespace Strategy1_ {

    class Strategy1_user
    {
    private:
        std::unique_ptr < Strategy1 > m_algorythm;

    public:
        Strategy1_user ( std::unique_ptr < Strategy1 > algorythm );
        virtual ~Strategy1_user();


        void change_strategy ( std::unique_ptr < Strategy1 > algorythm );
        void execute();
    };

}

#endif // USECASE_STRATEGY1_H
