#include "contact.h"

Contact::Contact ( const std::string &name,
                   const std::string &surname,
                   const std::string &phone,
                   const std::string &mail,
                   const std::string &address,
                   int age )
    : mName { name },
      mSurname { surname },
      mPhone { phone },
      mMail { mail },
      mAddress { address },
      mAge { age }
{
}

Contact::~Contact()
{
}

void Contact::print() const
{
    std::cout << "====Contact====\n";
    std::cout << "Name: " << mName << '\n';
    std::cout << "Surname: " << mSurname << '\n';
    std::cout << "Phone: " << mPhone << '\n';
    std::cout << "eMail: " << mMail << '\n';
    std::cout << "Address: " << mAddress << '\n';
    std::cout << "Age: " << mAge << '\n';
}
