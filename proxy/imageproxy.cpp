#include "imageproxy.h"

ImageReal::ImageReal ( int id ) : mId { id }
{
    std::cout << "ImageReal(): acquired " << mId << '\n';
}
ImageReal::~ImageReal()
{
    std::cout << "~ImageReal(): destroyed " << mId << '\n';
}
void ImageReal::draw() const
{
    std::cout << "ImageReal::draw(): " << mId << '\n';
}

ImageProxy::ImageProxy() : mImageReal { nullptr }
{
}
ImageProxy::~ImageProxy()
{
    if ( mImageReal )
        delete mImageReal;
}
void ImageProxy::draw() const
{
    if ( ! mImageReal )
        mImageReal = new ImageReal ( ++s_IdGenerator );

    return mImageReal->draw();
}
