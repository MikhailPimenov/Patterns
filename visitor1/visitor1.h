#ifndef VISITOR1_H
#define VISITOR1_H

#include <iostream>

class Visitor1;

class Element1
{
public:
    Element1();
    virtual ~Element1();

    virtual void accept ( Visitor1 &v ) = 0;
};

class This : public Element1
{
public:
    This();
    virtual ~This() override;

    virtual void accept ( Visitor1 &v ) override;

    std::string thiss();
};

class That : public Element1
{
public:
    That();
    virtual ~That() override;

    virtual void accept ( Visitor1 &v ) override;

    std::string that();
};

class Another : public Element1
{
public:
    Another();
    virtual ~Another() override;

    virtual void accept ( Visitor1 &v ) override;

    std::string another();
};

class Visitor1
{
public:
    Visitor1();
    virtual ~Visitor1();

    virtual void visit ( This &e )    = 0;
    virtual void visit ( That &e )    = 0;
    virtual void visit ( Another &e ) = 0;
};

class UpVisitor : public Visitor1
{
public:
    UpVisitor();
    virtual ~UpVisitor() override;


    virtual void visit ( This &e ) override;
    virtual void visit ( That &e ) override;
    virtual void visit ( Another &e ) override;
};

class DownVisitor : public Visitor1
{
public:
    DownVisitor();
    virtual ~DownVisitor() override;


    virtual void visit ( This &e ) override;
    virtual void visit ( That &e ) override;
    virtual void visit ( Another &e ) override;
};
#endif // VISITOR1_H
