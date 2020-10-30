#include "prototype2.h"
namespace Prototype2_ {


    Prototypes_t &get_prototypes()
    {
        static Prototypes_t single_instance;
        return single_instance;
    }


}
