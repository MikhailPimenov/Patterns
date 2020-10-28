#include "test_template_method1.h"


namespace Template_method1_ {

    void test_template_method1()
    {
        std::cout << "test_template_method1():\n";

        Template_method1_user tmu ( std::make_unique < Variant1 > () );
        tmu.execute();

        tmu.change_algorythm_part ( std::make_unique < Variant2 > () );
        tmu.execute();

        tmu.change_algorythm_part ( std::make_unique < Variant3 > () );
        tmu.execute();

    }

}
