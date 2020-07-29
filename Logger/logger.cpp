#include "logger.h"

Logger::Logger ( std::unique_ptr<LoggerImpl> loggerImpl )
    : mLoggerImpl { std::move ( loggerImpl ) }
{
#ifdef VERBOSE
    std::cout << "Logger acquired\n";
#endif
}
Logger::~Logger()
{
#ifdef VERBOSE
    std::cout << "Logger destroyed\n";
#endif
}


ConsoleLogger::ConsoleLogger()
    : Logger {
          #ifdef ST
          std::make_unique < STLoggerImpl > ()
          #else
          std::make_unique < MTLoggerImpl > ()
          #endif
          }
{
#ifdef VERBOSE
    std::cout << "ConsoleLogger acquired\n";
#endif
}
ConsoleLogger::~ConsoleLogger()
{
#ifdef VERBOSE
    std::cout << "ConsoleLogger destroyed\n";
#endif
}
void ConsoleLogger::log ( const std::string &message ) const
{
    this->mLoggerImpl.get()->consoleLog ( message );
}

FileLogger::FileLogger ( const std::string &fileName )
    : Logger {
          #ifdef ST
          std::make_unique < STLoggerImpl > ()
          #else
          std::make_unique < MTLoggerImpl > ()
          #endif
          },
      mFileName { fileName }
{
#ifdef VERBOSE
    std::cout << "FileLogger acquired\n";
#endif
}
FileLogger::~FileLogger()
{
#ifdef VERBOSE
    std::cout << "FileLogger destroyed\n";
#endif
}
void FileLogger::log ( const std::string &message ) const
{
    this->mLoggerImpl->fileLog ( message, mFileName );
}

SocketLogger::SocketLogger ( const std::string &host,
                             const std::string &port )
    : Logger {
          #ifdef ST
          std::make_unique < STLoggerImpl > ()
          #else
          std::make_unique < MTLoggerImpl > ()
          #endif
          },
      mHost { host }, mPort { port }
{
#ifdef VERBOSE
    std::cout << "SocketLogger acquired\n";
#endif
}
SocketLogger::~SocketLogger()
{
#ifdef VERBOSE
    std::cout << "SocketLogger destroyed\n";
#endif
}
void SocketLogger::log ( const std::string &message ) const
{
    this->mLoggerImpl->socketLog ( message, mHost, mPort );
}


