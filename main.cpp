#include <iostream>
#include <memory>

// patterns: facade

#include "department/idepartment.h"
#include "facade/facadedepartment.h"

void noFacade()
{
    Worker1 w1;
    Worker2 w2;
    Worker3 w3;

    int count = 0;
    w1.setTask();
    while ( ! w1.checkTask() )
    {
        ++count;
    }

    w2.setTask();
    while ( ! w2.checkTask() )
    {
        ++count;
    }

    w3.setTask();
    while ( ! w3.checkTask() )
    {
        ++count;
    }

    std::cout << "Task completed: " << count << " checks needed.\n";
}
void facade()
{
    FacadeDepartment f;
    f.setTask();

    while ( ! f.checkTask() )
    {}
}
void testFacade()
{
    std::cout << "\nno facade:\n";
    noFacade();
    std::cout << "\nfacade:\n";
    facade();
    std::cout << "\ntestFacade(): end\n";
}

int main()
{
    testFacade();
    std::cout << "main(): end\n";
    return 0;
}
