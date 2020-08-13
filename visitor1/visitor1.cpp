#include "visitor1.h"

Element1::Element1()
{}
Element1::~Element1()
{}

This::This()
{}
This::~This()
{}
void This::accept ( Visitor1 &v )
{
    v.visit ( *this );
}
std::string This::thiss()
{
    return "this";
}

That::That()
{}
That::~That()
{}
void That::accept ( Visitor1 &v )
{
    v.visit ( *this );
}
std::string That::that()
{
    return "that";
}

Another::Another()
{}
Another::~Another()
{}
void Another::accept ( Visitor1 &v )
{
    v.visit ( *this );
}
std::string Another::another()
{
    return "another";
}

Visitor1::Visitor1()
{}
Visitor1::~Visitor1()
{}

UpVisitor::UpVisitor()
{}
UpVisitor::~UpVisitor()
{}
void UpVisitor::visit ( This &e )
{
    std::cout << "Do UP with " << e.thiss() << '\n';
}
void UpVisitor::visit ( That &e )
{
    std::cout << "Do UP with " << e.that() << '\n';
}
void UpVisitor::visit ( Another &e )
{
    std::cout << "Do UP with " << e.another() << '\n';
}

DownVisitor::DownVisitor()
{}
DownVisitor::~DownVisitor()
{}
void DownVisitor::visit ( This &e )
{
    std::cout << "Do DOWN with " << e.thiss() << '\n';
}
void DownVisitor::visit ( That &e )
{
    std::cout << "Do DOWN with " << e.that() << '\n';
}
void DownVisitor::visit ( Another &e )
{
    std::cout << "Do DOWN with " << e.another() << '\n';
}
