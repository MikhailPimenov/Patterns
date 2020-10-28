#include "usecase_template_method1.h"

namespace Template_method1_ {


    Template_method1_user::Template_method1_user ( std::unique_ptr < Template_method1 > algorythm_part )
        : m_algorythm_part { std::move ( algorythm_part ) }
    {}
    Template_method1_user::~Template_method1_user()
    {}
    void Template_method1_user::change_algorythm_part ( std::unique_ptr < Template_method1 > algorythm_part )
    {
        this->m_algorythm_part = std::move ( algorythm_part );
    }
    void Template_method1_user::execute()
    {
        this->m_algorythm_part.get()->execute();
    }


}
