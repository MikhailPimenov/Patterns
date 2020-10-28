#include "usecase_strategy1.h"

namespace Strategy1_ {


    Strategy1_user::Strategy1_user ( std::unique_ptr < Strategy1 > algorythm )
        : m_algorythm { std::move ( algorythm ) }
    {}
    Strategy1_user::~Strategy1_user()
    {}
    void Strategy1_user::execute()
    {
        this->m_algorythm.get()->execute();
    }
    void Strategy1_user::change_strategy ( std::unique_ptr<Strategy1> algorythm )
    {
        this->m_algorythm = std::move ( algorythm );
    }

}
