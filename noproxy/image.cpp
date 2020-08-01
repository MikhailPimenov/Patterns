#include "image.h"

Image::Image() : mId { ++s_IdGenerator }
{
    std::cout << "Image(): acquired " << mId << '\n';
}
Image::~Image()
{
    std::cout << "~Image(): destroyed\n";
}
void Image::draw() const
{
    std::cout << "Image::draw() " << mId << '\n';
}
