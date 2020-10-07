#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <map>
#include <memory>

namespace Prototype1_ {


    class Warrior;
    enum Warrior_ID {
        Infantryman_ID,
        Archer_ID,
        Horseman_ID,
        All_ID
    };


    using Registry_t = std::map < Warrior_ID, Warrior * >;

    Registry_t &get_registry();
}


#endif // PROTOTYPE_H
