#ifndef BRIDGE1_H
#define BRIDGE1_H

#include <iostream>

namespace Bridge1_ {

    class Logger_implementation
    {
    public:
        Logger_implementation();
        virtual ~Logger_implementation();

        virtual void console_log ( const std::string &message ) const = 0;
        virtual void file_log ( const std::string &file_name, const std::string &message ) const = 0;
        virtual void socket_log ( const std::string &host, int port, const std::string &message ) const = 0;
    };

    class MT_logger_implementation : public Logger_implementation
    {
    public:
        MT_logger_implementation();
        virtual ~MT_logger_implementation() override;

        virtual void console_log ( const std::string &message ) const override;
        virtual void file_log ( const std::string &file_name, const std::string &message ) const override;
        virtual void socket_log ( const std::string &host, int port, const std::string &message ) const override;
    };

    class ST_logger_implementation : public Logger_implementation
    {
    public:
        ST_logger_implementation();
        virtual ~ST_logger_implementation() override;

        virtual void console_log ( const std::string &message ) const override;
        virtual void file_log ( const std::string &file_name, const std::string &message ) const override;
        virtual void socket_log ( const std::string &host, int port, const std::string &message ) const override;
    };


}

#endif // BRIDGE1_H
