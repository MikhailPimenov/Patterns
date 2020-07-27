#include "contactbuilder.h"

ContactBuilder::~ContactBuilder()
{}

ContactBuilder& ContactBuilder::name ( const std::string &name )
{
    mName = name;
    return *this;
}
const std::string& ContactBuilder::getName()
{
    return mName;
}

ContactBuilder& ContactBuilder::surname ( const std::string &surname )
{
    mSurname = surname;
    return *this;
}
const std::string& ContactBuilder::getSurname()
{
    return mSurname;
}

ContactBuilder& ContactBuilder::phone ( const std::string &phone )
{
    mPhone = phone;
    return *this;
}
const std::string& ContactBuilder::getPhone()
{
    return mPhone;
}

ContactBuilder& ContactBuilder::mail ( const std::string &mail )
{
    mMail = mail;
    return *this;
}
const std::string& ContactBuilder::getMail()
{
    return mMail;
}

ContactBuilder& ContactBuilder::address ( const std::string &address )
{
    mAddress = address;
    return *this;
}
const std::string& ContactBuilder::getAddress()
{
    return mAddress;
}

ContactBuilder& ContactBuilder::age ( int age )
{
    mAge = age;
    return *this;
}
int ContactBuilder::getAge()
{
    return mAge;
}

std::unique_ptr < Contact > ContactBuilder::build() const
{
    return std::make_unique < Contact > ( mName,
                                          mSurname,
                                          mPhone,
                                          mMail,
                                          mAddress,
                                          mAge );
}
