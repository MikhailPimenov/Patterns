#include <iostream>

// patterns: strategy
#include <strategy/compression.h>

void testStrategy()
{
    std::string file1 = "file1";

    Compressor compressor ( std::make_unique < RAR_compression > () );
    compressor.compress ( file1 );

    compressor.setCompression ( std::make_unique < ZIP_compression > () );
    compressor.compress ( file1 );

    compressor.setCompression ( std::make_unique < ARJ_compression > () );
    compressor.compress ( file1 );

    std::cout << "\ntestStrategy(): end\n";
}

int main()
{
    testStrategy();
    std::cout << "main(): end\n";

    return 0;
}
