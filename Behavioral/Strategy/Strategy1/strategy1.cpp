#include "strategy1.h"

namespace Strategy1_ {

    Strategy1::Strategy1()
    {
        std::cout << "Strategy1 acquired\n";
    }
    Strategy1::~Strategy1()
    {
        std::cout << "Strategy1 destroyed\n";
    }

    Algorythm1::Algorythm1()
    {
        std::cout << "Algorythm1 acquired\n";
    }
    Algorythm1::~Algorythm1()
    {
        std::cout << "Algorythm1 destroyed\n";

    }
    void Algorythm1::execute()
    {
        std::cout << "\t\t\tExecuting Algorithm1\n";
    }

    Algorythm2::Algorythm2()
    {
        std::cout << "Algorythm2 acquired\n";
    }
    Algorythm2::~Algorythm2()
    {
        std::cout << "Algorythm2 destroyed\n";

    }
    void Algorythm2::execute()
    {
        std::cout << "\t\t\tExecuting Algorithm2\n";
    }

    Algorythm3::Algorythm3()
    {
        std::cout << "Algorythm3 acquired\n";
    }
    Algorythm3::~Algorythm3()
    {
        std::cout << "Algorythm3 destroyed\n";

    }
    void Algorythm3::execute()
    {
        std::cout << "\t\t\tExecuting Algorithm3\n";
    }

}
