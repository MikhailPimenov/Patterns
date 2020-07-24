#ifndef CHAIR_H
#define CHAIR_H

#include "furniture.h"

class Chair : public Furniture
{
public:
    Chair();
    virtual ~Chair() override;

    virtual void print() const override;

};

#endif // CHAIR_H
