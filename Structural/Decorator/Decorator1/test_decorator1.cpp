#include "test_decorator1.h"

namespace Decorator1_ {

    void test_decorator1()
    {
        I *aXYZ = new Z ( new Y ( new X ( new A ) ) );
        aXYZ->do_it();
        std::cout << std::endl;


        I *aXXZ = new Z ( new X ( new X ( new A ) ) );
        aXXZ->do_it();
        std::cout << std::endl;


        I *aXZXZY = new Y ( new Z ( new X ( new Z ( new X ( new A ) ) ) ) );
        aXZXZY->do_it();
        std::cout << std::endl;


        delete aXYZ;
    }

}
