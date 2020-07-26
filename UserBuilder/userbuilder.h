#ifndef USERBUILDER_H
#define USERBUILDER_H

#include <iostream>
#include <string>
#include "User/user.h"

class UserBuilder
{
private:
    std::string mFirstName;
    std::string mSecondName;
    std::string mStreet;
    int         mAge;

public:
    UserBuilder();
    virtual ~UserBuilder();

    UserBuilder& addFirstName  ( const std::string &firstName );
    UserBuilder& addSecondName ( const std::string &secondName );
    UserBuilder& addStreet     ( const std::string &street );
    UserBuilder& addAge        ( int age );

    std::unique_ptr < User > build() const;
};

#endif // USERBUILDER_H
