#include "test_visitor1.h"

namespace Visitor1_ {



    void test_visitor1()
    {
        std::cout << "test_visitor1():\n\n";


        std::vector < std::unique_ptr < Visitor1 > > operations;
        operations.reserve ( 2 );
        operations.push_back ( std::make_unique < Calculate_square >() );
        operations.push_back ( std::make_unique < Calculate_perimeter >() );


        std::vector < std::unique_ptr < Figure > > figures;
        figures.reserve ( 3 );

        figures.push_back ( std::make_unique < Circle > () );
        figures.push_back ( std::make_unique < Triangle > () );
        figures.push_back ( std::make_unique < Foursquare > () );



        for ( auto &figure : figures ) {
            for ( auto &operation : operations )
                figure.get()->accept ( operation.get() );
            std::cout << std::endl;
        }

    }

}
