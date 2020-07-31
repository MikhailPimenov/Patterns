#ifndef IDEPARTMENT_H
#define IDEPARTMENT_H

#include <iostream>

class IDepartment
{
protected:
    int mState;

public:
    IDepartment();
    virtual ~IDepartment();

    virtual void setTask() = 0;
    virtual bool checkTask() = 0;
};

class Worker1 : public IDepartment
{
private:
    enum States
    {
        Received, AssignToEngineer, EngineerResearches,
        RequestIsNotPossible, EngineerLeavesCompany,
        AssignToNewEngineer, NewEngineerResearches,
        ReassignEngineer,EngineerReturns,
        EngineerResearchesAgain, EngineerFillsOutPaperWork,
        Complete
    };
public:
    Worker1();
    virtual ~Worker1() override;

    virtual void setTask() override;
    virtual bool checkTask() override;
};


class Worker2 : public IDepartment
{
private:
    enum States
    {
        Received, RejectTheForm, SizeTheJob, SmokeAndJokeBreak,
        WaitForAuthorization, DoTheWrongJob, BlameTheEngineer,
        WaitToPunchOut, DoHalfAJob, ComplainToEngineer,
        GetClarification, CompleteTheJob, TurnInThePaperwork,
        Complete
    };
public:
    Worker2();
    virtual ~Worker2() override;

    virtual void setTask() override;
    virtual bool checkTask() override;
};


class Worker3 : public IDepartment
{
private:
    enum States
    {
        Received, DenyAllKnowledge, ReferClientToFacilities,
        FacilitiesHasNotSentPaperwork, ElectricianIsNotDone,
        ElectricianDidItWrong, DispatchTechnician, SignedOff,
        DoesNotWork, FixElectriciansWiring, Complete
    };
public:
    Worker3();
    virtual ~Worker3() override;

    virtual void setTask() override;
    virtual bool checkTask() override;
};
#endif // IDEPARTMENT_H
