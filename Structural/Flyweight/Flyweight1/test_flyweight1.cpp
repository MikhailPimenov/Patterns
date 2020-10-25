#include "test_flyweight1.h"

namespace Flyweight1_ {

    int No_flyweight::s_x = 4;
    int No_flyweight::s_y = 10;
    int No_flyweight::s_number = 0;

    int Flyweight1::s_x = 4;

    void no_flyweight_test()
    {
        std::cout << "No flyweight:\n";

        No_flyweight *array = new No_flyweight[static_cast < unsigned > ( No_flyweight::s_y * No_flyweight::s_x )];
        No_flyweight **matrix = new No_flyweight*[static_cast < unsigned > ( No_flyweight::s_x )];
        for ( int i = 0; i < No_flyweight::s_x; ++i )
            matrix[i] = array + i * No_flyweight::s_y;

        for ( int i = 0; i < No_flyweight::s_x; ++i ) {
            for ( int j = 0; j < No_flyweight::s_y; ++j )
                matrix[i][j].report();
            std::cout << '\n';
        }

        std::cout << "total size: "
                  << ( sizeof ( No_flyweight )
                       * static_cast < unsigned > ( No_flyweight::s_x )
                       * static_cast < unsigned > ( No_flyweight::s_y ) )
                  << '\n';

        delete [] matrix;
        delete [] array;

    }

    void flyweight_test()
    {
        std::cout << "Flyweight:\n";

        Factory f;

        for ( int i = 0; i < Flyweight1::s_x; ++i ) {
            for ( int j = 0; j < 10; ++j )
                f.get_flyweight ( i )->report ( j );
            std::cout << '\n';
        }

        std::cout << "total size: "
                  << sizeof ( Flyweight1 )
                  * static_cast < unsigned > ( Flyweight1::s_x )
                  << '\n';
        f.clean_pool();
    }
    void test_flyweight1()
    {
        no_flyweight_test();
        std::cout << "\n\n\n";
        flyweight_test();
    }

}
