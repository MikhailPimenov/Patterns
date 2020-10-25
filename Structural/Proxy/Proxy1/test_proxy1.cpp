#include "test_proxy1.h"


namespace Proxy1_ {


    int No_proxy_image::s_id_generator = -1;
    void no_proxy1_test()
    {
        std::cout << "No proxy:\n";

        No_proxy_image images[10];

        images[3].draw();
        images[7].draw();

    }


    int Proxy1::s_id_generator = -1;
    void proxy1_test()
    {
        std::cout << "Proxy:\n";

        Proxy1 images[10];

        images[3].draw();
        images[7].draw();
    }


    void test_proxy1()
    {
        no_proxy1_test();
        proxy1_test();
    }

}
