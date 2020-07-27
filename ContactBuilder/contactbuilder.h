#ifndef CONTACTBUILDER_H
#define CONTACTBUILDER_H

#include <iostream>
#include <memory>
#include <string>
#include "Contact/contact.h"

class ContactBuilder
{
private:
    std::string mName;
    std::string mSurname;
    std::string mPhone;
    std::string mMail;
    std::string mAddress;
    int         mAge;
public:
    ContactBuilder() = default;
    virtual ~ContactBuilder();

    ContactBuilder& name ( const std::string &name );
    const std::string& getName();

    ContactBuilder& surname ( const std::string &surname );
    const std::string& getSurname();

    ContactBuilder& phone ( const std::string &phone );
    const std::string& getPhone();

    ContactBuilder& mail ( const std::string &mail );
    const std::string& getMail();

    ContactBuilder& address ( const std::string &address );
    const std::string& getAddress();

    ContactBuilder& age ( int age );
    int getAge();


    virtual std::unique_ptr < Contact > build() const;

};

#endif // CONTACTBUILDER_H
