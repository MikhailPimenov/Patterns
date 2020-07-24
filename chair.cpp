#include "chair.h"

Chair::Chair() : Furniture()
{
    std::cout << "Chair acquired\n";
}

Chair::~Chair()
{
    std::cout << "Chair destroyed\n";
}

void Chair::print() const
{
    std::cout << "I am a chair\n";
}
