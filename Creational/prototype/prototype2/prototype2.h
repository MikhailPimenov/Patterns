#ifndef PROTOTYPE2_H
#define PROTOTYPE2_H

#include <iostream>
#include <map>

namespace Prototype2_ {

    class Figure;
    class Circle;
    class Triangle;

    enum Keys_t {
        CIRCLE,
        TRIANGLE,
        ALL_KEYS,
    };

    using Prototypes_t = std::map < Keys_t, Figure * >;

    Prototypes_t &get_prototypes();



}
#endif // PROTOTYPE2_H
