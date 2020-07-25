#ifndef HEMLET_BASE_H
#define HEMLET_BASE_H

#include "item.h"

class Hemlet_base : public Item
{
protected:
    const int mStructure;
public:
    Hemlet_base ( int structure = 20 );
    virtual ~Hemlet_base() override;

    virtual void draw() const override = 0;
};

#endif // HEMLET_BASE_H
