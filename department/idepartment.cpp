#include "idepartment.h"

IDepartment::IDepartment()
    : mState { 0 }
{}
IDepartment::~IDepartment()
{}
void IDepartment::setTask()
{
    mState = 0;
}

Worker1::Worker1()
{}
Worker1::~Worker1()
{}
void Worker1::setTask()
{
    this->IDepartment::setTask();
}
bool Worker1::checkTask()
{

    if ( mState == States::Complete )
    {
        std::cout << "Worker1 has completed the task.\n";
        return true;
    }

    ++mState;
    return false;
}

Worker2::Worker2()
{}
Worker2::~Worker2()
{}
void Worker2::setTask()
{
    this->IDepartment::setTask();
}
bool Worker2::checkTask()
{

    if ( mState == States::Complete )
    {
        std::cout << "Worker2 has completed the task.\n";
        return true;
    }

    ++mState;
    return false;
}

Worker3::Worker3()
{}
Worker3::~Worker3()
{}
void Worker3::setTask()
{
    this->IDepartment::setTask();
}
bool Worker3::checkTask()
{

    if ( mState == States::Complete )
    {
        std::cout << "Worker3 has completed the task.\n";
        return true;
    }

    ++mState;
    return false;
}
