#include "bridge1.h"

namespace Bridge1_ {

    Logger_implementation::Logger_implementation()
    {}
    Logger_implementation::~Logger_implementation()
    {}


    MT_logger_implementation::MT_logger_implementation()
    {}
    MT_logger_implementation::~MT_logger_implementation()
    {}

    void MT_logger_implementation::console_log ( const std::string &message ) const
    {
        std::cout << "MT console logging with message:\n" << message << '\n';
    }
    void MT_logger_implementation::file_log ( const std::string &file_name, const std::string &message ) const
    {
        std::cout << "MT file logging in file \"" << file_name
                  << "\" with message:\n"         << message << '\n';
    }
    void MT_logger_implementation::socket_log ( const std::string &host, int port, const std::string &message ) const
    {
        std::cout << "MT socket logging on host \"" << host
                  << "\" and port \""               << port
                  << "\" with message:\n"           << message << '\n';
    }


    ST_logger_implementation::ST_logger_implementation()
    {}
    ST_logger_implementation::~ST_logger_implementation()
    {}

    void ST_logger_implementation::console_log ( const std::string &message ) const
    {
        std::cout << "ST console logging with message:\n" << message << '\n';
    }
    void ST_logger_implementation::file_log ( const std::string &file_name, const std::string &message ) const
    {
        std::cout << "ST file logging in file \"" << file_name
                  << "\" with message:\n"         << message << '\n';
    }
    void ST_logger_implementation::socket_log ( const std::string &host, int port, const std::string &message ) const
    {
        std::cout << "ST socket logging on host \"" << host
                  << "\" and port \""               << port
                  << "\" with message:\n"           << message << '\n';
    }


}
