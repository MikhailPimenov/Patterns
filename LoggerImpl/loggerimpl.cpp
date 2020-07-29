#include "loggerimpl.h"

LoggerImpl::LoggerImpl()
{}

LoggerImpl::~LoggerImpl()
{}

STLoggerImpl::STLoggerImpl()
{}
STLoggerImpl::~STLoggerImpl()
{}

void STLoggerImpl::consoleLog ( const std::string &message ) const
{
    std::cout << "Singlethreaded console log with message: " << message << '\n';
}
void STLoggerImpl::fileLog ( const std::string &message,
                             const std::string &fileName ) const
{
    std::cout << "Singlethreaded file log with file name: " << fileName
              << "\nand message: " << message << '\n';
}
void STLoggerImpl::socketLog ( const std::string &message,
                               const std::string &host,
                               const std::string &port ) const
{
    std::cout << "Singlethreaded socket log with host: " << host
              << "\nport: " << port <<"\and message: " << message << '\n';
}

MTLoggerImpl::MTLoggerImpl()
{}
MTLoggerImpl::~MTLoggerImpl()
{}

void MTLoggerImpl::consoleLog ( const std::string &message ) const
{
    std::cout << "Multythreaded console log with:\n message: " << message << '\n';
}
void MTLoggerImpl::fileLog ( const std::string &message,
                             const std::string &fileName ) const
{
    std::cout << "Multythreaded file log with:\nfile name: " << fileName
              << "\nand message: " << message << '\n';
}
void MTLoggerImpl::socketLog ( const std::string &message,
                               const std::string &host,
                               const std::string &port ) const
{
    std::cout << "Multythreaded socket log with:\nhost: " << host
              << "\nport: " << port <<"\nand message: " << message << '\n';
}
