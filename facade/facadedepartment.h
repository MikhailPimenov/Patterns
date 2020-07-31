#ifndef FACADEDEPARTMENT_H
#define FACADEDEPARTMENT_H

#include "department/idepartment.h"

class FacadeDepartment : public IDepartment
{
private:
    enum States
    {
        Received, SubmitToEngineer,
        SubmitToTechnician, SubmitToElectrician
    };

    Worker1 mW1;
    Worker2 mW2;
    Worker3 mW3;

    int mCount;
public:
    FacadeDepartment();
    virtual ~FacadeDepartment() override;

    virtual void setTask() override;
    virtual bool checkTask() override;
    int getCount() const;
};

#endif // FACADEDEPARTMENT_H
