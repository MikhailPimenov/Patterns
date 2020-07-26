#include "userbuilder.h"

UserBuilder::UserBuilder()
{}

UserBuilder::~UserBuilder()
{}

UserBuilder& UserBuilder::addFirstName ( const std::string &firstName )
{
    mFirstName = firstName;
    return *this;
}

UserBuilder& UserBuilder::addSecondName ( const std::string &secondName )
{
    mSecondName = secondName;
    return *this;
}

UserBuilder& UserBuilder::addStreet ( const std::string &street )
{
    mStreet = street;
    return *this;
}

UserBuilder& UserBuilder::addAge ( int age )
{
    mAge = age;
    return *this;
}

std::unique_ptr < User > UserBuilder::build() const
{
    return std::make_unique < User > ( mFirstName, mSecondName, mStreet, mAge );
}
