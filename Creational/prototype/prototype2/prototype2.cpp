#include "prototype2.h"

namespace Prototype2_ {

    Registry_t &get_registry()
    {
        static Registry_t single_instance;
        return single_instance;
    }
}
