#include <iostream>
#include <memory>

// patterns: proxy
#include "noproxy/image.h"
#include "proxy/imageproxy.h"

int Image::s_IdGenerator = 0;
int ImageProxy::s_IdGenerator = 0;
void noproxy()
{
    Image images[5];

    while ( true )
    {
        std::cout << "Enter '0' to exit, [1-5] to draw image\n";
        int action { -1 };
        std::cin >> action;

        if ( action == 0 )
            break;

        if ( action <= 5 && action >= 1 )
            images[action - 1].draw();
    }
}

void proxy()
{
    ImageProxy images[5];

    while ( true )
    {
        std::cout << "Enter '0' to exit, [1-5] to draw image\n";
        int action { -1 };
        std::cin >> action;

        if ( action == 0 )
            break;

        if ( action <= 5 && action >= 1 )
            images[action - 1].draw();
    }
}

void testProxy()
{
    std::cout << "\nno proxy:\n";
    noproxy();
    std::cout << "\nproxy:\n";
    proxy();
    std::cout << "\ntestProxy(): end\n";
}

int main()
{
    testProxy();
    std::cout << "main(): end\n";
    return 0;
}
