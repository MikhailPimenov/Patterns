#include "usecase_bridge1.h"


namespace Bridge1_ {

    Logger::Logger ( std::unique_ptr < Logger_implementation > implementation )
        : m_implementation { std::move ( implementation ) }
    {}
    Logger::~Logger()
    {}

    Console_logger::Console_logger()
        : Logger {
#ifdef MT
        std::make_unique < MT_logger_implementation > ()
#else
        std::make_unique < ST_logger_implementation > ()
#endif
    }
    {}

    Console_logger::~Console_logger()
    {}

    void Console_logger::log ( const std::string &message ) const
    {
        this->m_implementation.get()->console_log ( message );
    }


    File_logger::File_logger ( const std::string &file_name )
        : Logger {
#ifdef MT
        std::make_unique < MT_logger_implementation > ()
#else
        std::make_unique < MT_logger_implementation > ()
#endif
    },
    m_file_name { file_name }
    {}

    File_logger::~File_logger()
    {}

    void File_logger::log ( const std::string &message ) const
    {
        this->m_implementation.get()->file_log ( this->m_file_name, message );
    }


    Socket_logger::Socket_logger ( const std::string &host, int port )
        : Logger {
#ifdef MT
        std::make_unique < MT_logger_implementation > ()
#else
        std::make_unique < ST_logger_implementation > ()
#endif
    },
    m_port { port },
    m_host { host }
    {}

    Socket_logger::~Socket_logger()
    {}

    void Socket_logger::log ( const std::string &message ) const
    {
        this->m_implementation.get()->socket_log ( this->m_host, this->m_port, message );
    }

}
