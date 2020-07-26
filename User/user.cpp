#include "user.h"

User::User ( const std::string &firstName,
             const std::string &secondName,
             const std::string &street,
             int age )
    : mFirstName { firstName },
      mSecondName { secondName },
      mStreet { street },
      mAge { age }
{}

User::~User()
{
}


const std::string& User::getFirstName() const
{
    return mFirstName;
}
void User::setFirstName ( const std::string &firstName )
{
    mFirstName = firstName;
}

const std::string& User::getSecondName() const
{
    return mSecondName;
}
void User::setSecondName ( const std::string &secondName )
{
    mSecondName = secondName;
}

const std::string& User::getStreet() const
{
    return mStreet;
}
void User::setStreet ( const std::string &street )
{
    mStreet = street;
}

int User::getAge() const
{
    return mAge;
}
void User::setAge ( int age )
{
    mAge = age;
}

void User::print() const
{
    std::cout << "====User====\n";
    std::cout << "Name: " << mFirstName << ' ' << mSecondName << '\n';
    std::cout << "Age: " << mAge << '\n';
    std::cout << "Street: " << mStreet << '\n';
}

