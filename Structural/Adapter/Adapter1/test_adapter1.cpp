#include "test_adapter1.h"

namespace Adapter1_ {

    void test_adapter1()
    {
        FarenheitSensor fs1 ( 90 );
        std::cout << "90f = " << fs1.get_temperature() << "f\n";

        CelsiumSensor cs1 ( std::make_unique < FarenheitSensor > ( fs1.get_temperature() ) );
        std::cout << "90f = " << cs1.get_temperature() << "C\n";


    }

}
