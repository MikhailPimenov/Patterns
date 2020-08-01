#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>

class Image
{
    int mId;
    static int s_IdGenerator;
public:
    Image();
    virtual ~Image();

    void draw() const;
};

#endif // IMAGE_H
