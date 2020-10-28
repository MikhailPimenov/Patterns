#include "template_method1.h"

namespace Template_method1_ {

    Template_method1::Template_method1()
    {}
    Template_method1::~Template_method1()
    {}
    void Template_method1::execute()
    {
        std::cout << "\n\nstart executing:\n";
        this->execute_part1();
        this->execute_part2();
        this->execute_part3();
        std::cout << "end executing.\n\n\n";
    }
    void Template_method1::execute_part1()
    {
        std::cout << "part1\n";
    }
    void Template_method1::execute_part3()
    {
        std::cout << "part3\n";
    }


    Variant1::Variant1()
    {}
    Variant1::~Variant1()
    {}
    void Variant1::execute_part2()
    {
        std::cout << "part2 variant1\n";
    }


    Variant2::Variant2()
    {}
    Variant2::~Variant2()
    {}
    void Variant2::execute_part2()
    {
        std::cout << "part2 variant2\n";
    }


    Variant3::Variant3()
    {}
    Variant3::~Variant3()
    {}
    void Variant3::execute_part2()
    {
        std::cout << "part2 variant3\n";
    }

}
