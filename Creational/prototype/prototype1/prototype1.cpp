#include "prototype1.h"

namespace Prototype1_ {



    Registry_t &get_registry()
    {
        static Registry_t single_instance;
        return single_instance;
    }

}
