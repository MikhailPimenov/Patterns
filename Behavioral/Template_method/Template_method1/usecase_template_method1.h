#ifndef USECASE_TEMPLATE_METHOD1_H
#define USECASE_TEMPLATE_METHOD1_H

#include <memory>
#include <iostream>
#include "template_method1.h"

namespace Template_method1_ {

    class Template_method1_user
    {
    private:
        std::unique_ptr < Template_method1 > m_algorythm_part;

    public:
        Template_method1_user ( std::unique_ptr < Template_method1 > algorythm_part );
        virtual ~Template_method1_user();

        void execute();

        void change_algorythm_part ( std::unique_ptr < Template_method1 > algorythm_part );
    };

}

#endif // USECASE_TEMPLATE_METHOD1_H
