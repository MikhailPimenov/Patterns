#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
private:
    std::string mName;
    std::string mSurname;
    std::string mPhone;
    std::string mMail;
    std::string mAddress;
    int         mAge;
public:
    Contact() = default;
    Contact ( const std::string &name,
              const std::string &surname,
              const std::string &phone,
              const std::string &mail,
              const std::string &address,
              int age );

    virtual ~Contact();

    void print() const;

};

#endif // CONTACT_H
