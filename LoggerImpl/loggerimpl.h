#ifndef LOGGERIMPL_H
#define LOGGERIMPL_H

#include <iostream>
#include <string>

class LoggerImpl
{
public:
    LoggerImpl();
    virtual ~LoggerImpl();

    virtual void consoleLog ( const std::string &message )  const = 0;

    virtual void fileLog    ( const std::string &message,
                              const std::string &fileName ) const = 0;

    virtual void socketLog  ( const std::string &message,
                              const std::string &host,
                              const std::string &port )     const = 0;
};

class STLoggerImpl : public LoggerImpl
{
public:
    STLoggerImpl();
    virtual ~STLoggerImpl() override;

    virtual void consoleLog ( const std::string &message )  const override;

    virtual void fileLog    ( const std::string &message,
                              const std::string &fileName ) const override;

    virtual void socketLog  ( const std::string &message,
                              const std::string &host,
                              const std::string &port )     const override;
};

class MTLoggerImpl : public LoggerImpl
{
public:
    MTLoggerImpl();
    virtual ~MTLoggerImpl() override;

    virtual void consoleLog ( const std::string &message )  const override;

    virtual void fileLog    ( const std::string &message,
                              const std::string &fileName ) const override;

    virtual void socketLog  ( const std::string &message,
                              const std::string &host,
                              const std::string &port )     const override;
};
#endif // LOGGERIMPL_H
