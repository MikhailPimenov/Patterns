#ifndef ITEM_H
#define ITEM_H

#include <iostream>

class Item
{
public:
    Item();
    virtual ~Item();

    virtual void draw() const = 0;
};

#endif // ITEM_H
