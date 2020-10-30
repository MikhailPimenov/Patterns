#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <map>
#include <memory>

namespace Prototype2_ {

    class Figure;

    enum Key_t {
        CIRCLE,
        TRIANGLE,
        ALL_KEYS,
    };

    using Registry_t = std::map < Key_t, Figure * >;

    Registry_t &get_registry();

}


#endif // PROTOTYPE_H
