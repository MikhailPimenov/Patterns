#include "visitor1.h"

Element1::Element1()
{}
Element1::~Element1()
{}

Thiss::Thiss()
{}
Thiss::~Thiss()
{}
void Thiss::accept ( Visitor1 &v )
{
    v.visit ( *this );
}
std::string Thiss::thiss() const
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
std::string That::that() const
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
std::string Another::another() const
{
    return "another";
}

Visitor1::Visitor1()
{}
Visitor1::~Visitor1()
{}

Up::Up()
{}
Up::~Up()
{}
void Up::visit ( Thiss &thiss )
{
    std::cout << "Do up with " << thiss.thiss() << '\n';
}
void Up::visit ( That &that )
{
    std::cout << "Do up with " << that.that() << '\n';
}
void Up::visit ( Another &another )
{
    std::cout << "Do up with " << another.another() << '\n';
}

Down::Down()
{}
Down::~Down()
{}
void Down::visit ( Thiss &thiss )
{
    std::cout << "Do down with " << thiss.thiss() << '\n';
}
void Down::visit ( That &that )
{
    std::cout << "Do down with " << that.that() << '\n';
}
void Down::visit ( Another &another )
{
    std::cout << "Do down with " << another.another() << '\n';
}
