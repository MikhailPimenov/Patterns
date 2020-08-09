#ifndef COMPRESSION_H
#define COMPRESSION_H

#include <iostream>
#include <memory>

class Compression;
class Compressor
{
private:
    std::unique_ptr < Compression > mCompression;

public:
    Compressor ( std::unique_ptr < Compression > compression );
    virtual ~Compressor();

    void setCompression ( std::unique_ptr < Compression > compression );
    void compress ( const std::string &fileName );
};

class Compression
{
public:
    Compression();
    virtual ~Compression();

    virtual void compress ( const std::string &fileName ) = 0;
};

class ARJ_compression : public Compression
{
public:
    ARJ_compression();
    virtual ~ARJ_compression() override;

    virtual void compress ( const std::string &fileName ) override;
};

class RAR_compression : public Compression
{
public:
    RAR_compression();
    virtual ~RAR_compression() override;

    virtual void compress ( const std::string &fileName ) override;
};

class ZIP_compression : public Compression
{
public:
    ZIP_compression();
    virtual ~ZIP_compression() override;

    virtual void compress ( const std::string &fileName ) override;
};
#endif // COMPRESSION_H
