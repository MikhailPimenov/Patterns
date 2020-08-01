#ifndef IMAGEPROXY_H
#define IMAGEPROXY_H

#include <iostream>
class ImageReal
{
private:
    int mId;
public:
    ImageReal ( int id );
    virtual ~ImageReal();

    void draw() const;
};

class ImageProxy
{
private:
    mutable ImageReal *mImageReal;
    static int s_IdGenerator;
public:
    ImageProxy();
    virtual ~ImageProxy();

    void draw() const;
};

#endif // IMAGEPROXY_H
