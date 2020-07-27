#include <iostream>
#include <memory>

#include "Contact/contact.h"
#include "ContactBuilder/contactbuilder.h"

// patterns: builder part3

void testBuilder()
{
    ContactBuilder contactBuilder;
    std::unique_ptr < Contact > contact = contactBuilder.age ( 20 )
                                                        .mail ( "asdf@mail.ru" )
                                                        .name ( "Andrew" )
                                                        .surname ( "Prokofiev" )
                                                        .phone ( "123456789" )
                                                        .address ( "Super street 14" )
                                                        .build();

    contact.get()->print();
}
int main()
{
    testBuilder();
    return 0;
}
