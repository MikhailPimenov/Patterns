#ifndef USECASE_BRIDGE1_H
#define USECASE_BRIDGE1_H

#include <iostream>
#include <memory>
#include "bridge1.h"

namespace Bridge1_ {

//=================================================================
//class Logger_implementation;
//=================================================================


    class Logger
    {
    protected:
        std::unique_ptr < Logger_implementation > m_implementation;

    public:
        Logger ( std::unique_ptr < Logger_implementation > implementation );
        virtual ~Logger();

        virtual void log ( const std::string &message ) const = 0;
    };

    class Console_logger: public Logger
    {
    public:
        Console_logger();
        virtual ~Console_logger() override;

        virtual void log ( const std::string &message ) const override;
    };

    class File_logger: public Logger
    {
    private:
        std::string m_file_name;
    public:
        File_logger ( const std::string &file_name );
        virtual ~File_logger() override;

        virtual void log ( const std::string &message ) const override;
    };

    class Socket_logger: public Logger
    {
    private:
        int m_port;
        std::string m_host;

    public:
        Socket_logger ( const std::string &host, int port );
        virtual ~Socket_logger() override;

        virtual void log ( const std::string &message ) const override;
    };
}

#endif // USECASE_BRIDGE1_H
