#ifndef HEMLETHEAVY_H
#define HEMLETHEAVY_H

#include "hemlet_base.h"

class HemletHeavy : public Hemlet_base
{
public:
    HemletHeavy();
    virtual ~HemletHeavy() override;

    virtual void draw() const override;
};

#endif // HEMLETHEAVY_H
