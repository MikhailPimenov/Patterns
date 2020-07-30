#include <iostream>
#include <memory>
#include <cassert>

// patterns: decorator

#include "nodecorator/a.h"
#include "decorator/decorator.h"

void noDecorator()
{
    Aonly a;
    a.doIt();
    std::cout << '\n';

    AwithX ax;
    ax.doIt();
    std::cout << '\n';

    AwithXY axy;
    axy.doIt();
    std::cout << '\n';

    AwithXYZ axyz;
    axyz.doIt();
    std::cout << '\n';
}
void decorator()
{
    std::unique_ptr < I > xyz ( std::make_unique < Z > (
                                    std::make_unique < Y > (
                                        std::make_unique < X > (
                                            std::make_unique < A > () ) ) ) );
    xyz.get()->doIt();
    std::cout << '\n';
}
void testDecorator()
{
    std::cout << "\nno decorator:\n";
    noDecorator();

    std::cout << "\ndecorator:\n";
    decorator();

    std::cout << "testDecorator(): end\n";
}

int main()
{
    testDecorator();
    std::cout << "main(): end\n";
    return 0;
}
