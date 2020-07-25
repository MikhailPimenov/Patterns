#ifndef HEMLETLIGHT_H
#define HEMLETLIGHT_H

#include "hemlet_base.h"

class HemletLight : public Hemlet_base
{
public:
    HemletLight();
    virtual ~HemletLight() override;

    virtual void draw() const override;
};

#endif // HEMLETLIGHT_H
