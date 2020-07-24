#include <iostream>

#include "furniturefactory.h"
#include "chairfactory.h"
#include "tablefactory.h"

// patterns: fabric

void defineWhat ( const FurnitureFactory &f )
{
    std::shared_ptr < Furniture > ptr = f.create();

    if ( ptr )
        ptr.get()->print();
    else
        std::cout << "main(): defineWhat(): something went wrong\n";
}

int main()
{
    ChairFactory cf;
    TableFactory tf;

    defineWhat ( cf );
    defineWhat ( tf );

    return 0;
}
