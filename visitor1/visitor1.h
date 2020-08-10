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

class Thiss : public Element1
{
public:
    Thiss();
    virtual ~Thiss() override;

    virtual void accept ( Visitor1 &v ) override;
    std::string thiss() const;
};

class That : public Element1
{
public:
    That();
    virtual ~That() override;

    virtual void accept ( Visitor1 &v ) override;
    std::string that() const;
};

class Another : public Element1
{
public:
    Another();
    virtual ~Another() override;

    virtual void accept ( Visitor1 &v ) override;
    std::string another() const;
};

class Visitor1
{
public:
    Visitor1();
    virtual ~Visitor1();

    virtual void visit ( Thiss &thiss ) = 0;
    virtual void visit ( That &that ) = 0;
    virtual void visit ( Another &another ) = 0;

};

class Up : public Visitor1
{
public:
    Up();
    virtual ~Up() override;

    virtual void visit ( Thiss &thiss ) override;
    virtual void visit ( That &that ) override;
    virtual void visit ( Another &another ) override;
};

class Down : public Visitor1
{
public:
    Down();
    virtual ~Down() override;

    virtual void visit ( Thiss &thiss ) override;
    virtual void visit ( That &that ) override;
    virtual void visit ( Another &another ) override;
};

#endif // VISITOR1_H
