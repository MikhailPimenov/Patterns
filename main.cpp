#include <iostream>
#include <memory>

// patterns: builder part1
#include "User/user.h"
#include "UserBuilder/userbuilder.h"

void testBuilder()
{
    UserBuilder builder;
    std::unique_ptr < User > user = builder.addFirstName ( "Arkady" )
                                           .addSecondName ( "Single" )
                                           .addStreet ( "Logovo-volkov street" )
                                           .addAge ( 20 )
                                           .build();
    user.get()->print();

    auto user2 = builder.addFirstName ( "Andrew" )
                        .addAge ( 18 )
                        .build();
    user2.get()->print();

}
int main()
{
    testBuilder();
    return 0;
}
