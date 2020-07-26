#ifndef USER_H
#define USER_H

#include <iostream>
#include <memory>
#include <string>

class User
{
private:
    std::string mFirstName;
    std::string mSecondName;
    std::string mStreet;
    int         mAge;

public:
    User ( const std::string &firstName,
           const std::string &secondName,
           const std::string &street,
           int age );

    virtual ~User();


    const std::string& getFirstName() const;
    void setFirstName ( const std::string &firstName );

    const std::string& getSecondName() const;
    void setSecondName ( const std::string &secondName );

    const std::string& getStreet() const;
    void setStreet ( const std::string &street );

    int getAge() const;
    void setAge ( int age );

    void print() const;

};

#endif // USER_H
