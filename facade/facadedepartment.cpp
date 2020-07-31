#include "facadedepartment.h"

FacadeDepartment::FacadeDepartment()
    : mCount { 0 }
{}
FacadeDepartment::~FacadeDepartment()
{}
void FacadeDepartment::setTask()
{
    mW1.setTask();
    mW2.setTask();
    mW3.setTask();

    mCount = 0;
    mState = 0;
}

bool FacadeDepartment::checkTask()
{
    ++mCount;

    if ( mState == Received )
    {
        ++mState;
    }
    if ( mState == SubmitToEngineer )
    {
        if ( mW1.checkTask() )
            ++mState;
    }
    if ( mState == SubmitToTechnician )
    {
        if ( mW2.checkTask() )
            ++mState;
    }
    if ( mState == SubmitToElectrician )
    {
        if ( mW3.checkTask() )
        {
            std::cout << "Task completed: " << mCount << " checks needed.\n";
            return true;
        }
    }

    return false;
}


