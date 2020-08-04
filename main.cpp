#include <iostream>

// patterns: interpreter
#include "interpreter/interpreter_base.h"

void testMediator()
{
    Interpreter_base interpreter;
    std::cout << "Test #01: " << ( interpreter.interpret ( "I" )           == 1    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #02: " << ( interpreter.interpret ( "II" )          == 2    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #03: " << ( interpreter.interpret ( "IV" )          == 4    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #04: " << ( interpreter.interpret ( "V" )           == 5    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #05: " << ( interpreter.interpret ( "VI" )          == 6    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #06: " << ( interpreter.interpret ( "VII" )         == 7    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #07: " << ( interpreter.interpret ( "VIII" )        == 8    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #08: " << ( interpreter.interpret ( "IX" )          == 9    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #09: " << ( interpreter.interpret ( "X" )           == 10   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #10: " << ( interpreter.interpret ( "XI" )          == 11   ? "ok" : "FAILED" ) << '\n';

    std::cout << "Test #11: " << ( interpreter.interpret ( "XIII" )        == 13   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #12: " << ( interpreter.interpret ( "XV" )          == 15   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #13: " << ( interpreter.interpret ( "XVIII" )       == 18   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #14: " << ( interpreter.interpret ( "XIX" )         == 19   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #15: " << ( interpreter.interpret ( "XX" )          == 20   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #16: " << ( interpreter.interpret ( "XXVII" )       == 27   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #17: " << ( interpreter.interpret ( "XXIX" )        == 29   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #18: " << ( interpreter.interpret ( "XXXIV" )       == 34   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #19: " << ( interpreter.interpret ( "XXXIX" )       == 39   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #20: " << ( interpreter.interpret ( "XL" )          == 40   ? "ok" : "FAILED" ) << '\n';

    std::cout << "Test #21: " << ( interpreter.interpret ( "LXIX" )        == 69   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #22: " << ( interpreter.interpret ( "LXXXVIII" )    == 88   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #23: " << ( interpreter.interpret ( "XCVIII" )      == 98   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #24: " << ( interpreter.interpret ( "XCIX" )        == 99   ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #25: " << ( interpreter.interpret ( "C" )           == 100  ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #26: " << ( interpreter.interpret ( "CXLIX" )       == 149  ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #27: " << ( interpreter.interpret ( "CLXXXIX" )     == 189  ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #30: " << ( interpreter.interpret ( "CCXXVIII" )    == 228  ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #28: " << ( interpreter.interpret ( "CCCXXXIII" )   == 333  ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #29: " << ( interpreter.interpret ( "CDXCIX" )      == 499  ? "ok" : "FAILED" ) << '\n';

    std::cout << "Test #31: " << ( interpreter.interpret ( "CMLXXI" )      == 971  ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #32: " << ( interpreter.interpret ( "CMXCVIII" )    == 998  ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #33: " << ( interpreter.interpret ( "M" )           == 1000 ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #34: " << ( interpreter.interpret ( "MI" )          == 1001 ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #35: " << ( interpreter.interpret ( "MIX" )         == 1009 ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #36: " << ( interpreter.interpret ( "MCDLXXXVIII" ) == 1488 ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #37: " << ( interpreter.interpret ( "MCDLXXXIX" )   == 1489 ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #38: " << ( interpreter.interpret ( "MMDCCCXCIX" )  == 2899 ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #39: " << ( interpreter.interpret ( "MMMDCCLIV" )   == 3754 ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #40: " << ( interpreter.interpret ( "MMMCMXCIX" )   == 3999 ? "ok" : "FAILED" ) << '\n';

    std::cout << "Test #41: " << ( interpreter.interpret ( "IIII" )        == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #42: " << ( interpreter.interpret ( "VIIII" )       == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #43: " << ( interpreter.interpret ( "XXXX" )        == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #44: " << ( interpreter.interpret ( "XXL" )         == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #45: " << ( interpreter.interpret ( "IC" )          == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #46: " << ( interpreter.interpret ( "ID" )          == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #47: " << ( interpreter.interpret ( "XD" )          == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #48: " << ( interpreter.interpret ( "MMMM" )        == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #49: " << ( interpreter.interpret ( "MMMIM" )       == 0    ? "ok" : "FAILED" ) << '\n';
    std::cout << "Test #50: " << ( interpreter.interpret ( "MMMXM" )       == 0    ? "ok" : "FAILED" ) << '\n';


    std::cout << "\ntestMediator(): end\n";
}

int main()
{
    testMediator();
    std::cout << "main(): end\n";

    return 0;
}
