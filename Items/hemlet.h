#ifndef HEMLET_H
#define HEMLET_H

#include "hemlet_base.h"

class Hemlet : public Hemlet_base
{
public:
    Hemlet();
    virtual ~Hemlet() override;

    virtual void draw() const override;
};

#endif // HEMLET_H
