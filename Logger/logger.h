#ifndef LOGGER_H
#define LOGGER_H

#include <memory>
#include <string>

#include "LoggerImpl/loggerimpl.h"

#define ST // to use single thread implementation

class Logger
{
protected:
    std::unique_ptr < LoggerImpl > mLoggerImpl;
public:
    Logger ( std::unique_ptr < LoggerImpl > loggerImpl );
    virtual ~Logger();

    virtual void log ( const std::string &message ) const = 0;
};

class ConsoleLogger : public Logger
{
public:
    ConsoleLogger();
    virtual ~ConsoleLogger() override;

    virtual void log ( const std::string &message ) const override;
};

class FileLogger : public Logger
{
private:
    std::string mFileName;

public:
    FileLogger ( const std::string &fileName );
    virtual ~FileLogger() override;

    virtual void log ( const std::string &message ) const override;
};

class SocketLogger : public Logger
{
private:
    std::string mHost;
    std::string mPort;

public:
    SocketLogger ( const std::string &host,
                   const std::string &port );
    virtual ~SocketLogger() override;

    virtual void log ( const std::string &message ) const override;
};
#endif // LOGGER_H
