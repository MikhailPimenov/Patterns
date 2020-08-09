#include "compression.h"

Compressor::Compressor ( std::unique_ptr < Compression > compression )
    : mCompression { std::move ( compression ) }
{}
Compressor::~Compressor()
{}
void Compressor::setCompression ( std::unique_ptr < Compression > compression )
{
    mCompression = std::move ( compression );
}
void Compressor::compress ( const std::string &fileName )
{
    mCompression.get()->compress ( fileName );
}

Compression::Compression()
{}
Compression::~Compression()
{}

ARJ_compression::ARJ_compression()
{}
ARJ_compression::~ARJ_compression()
{}
void ARJ_compression::compress ( const std::string &fileName )
{
    std::cout << "ARJ compressing of file " << fileName << '\n';
}

RAR_compression::RAR_compression()
{}
RAR_compression::~RAR_compression()
{}
void RAR_compression::compress ( const std::string &fileName )
{
    std::cout << "RAR compressing of file " << fileName << '\n';
}

ZIP_compression::ZIP_compression()
{}
ZIP_compression::~ZIP_compression()
{}
void ZIP_compression::compress ( const std::string &fileName )
{
    std::cout << "ZIP compressing of file " << fileName << '\n';
}
