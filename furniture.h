#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>

class Furniture
{
public:
    Furniture();
    virtual ~Furniture();

    virtual void print() const = 0;

};

#endif // FURNITURE_H
