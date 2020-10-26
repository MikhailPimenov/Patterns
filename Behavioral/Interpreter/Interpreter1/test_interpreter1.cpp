#include "test_interpreter1.h"

namespace Interpreter1_ {

    void test_interpreter1()
    {
        Interpreter1 interpreter;

        std::cout << "I = 1: "              << interpreter.interpret ( "I" )            << '\n';
        std::cout << "II = 2: "             << interpreter.interpret ( "II" )           << '\n';
        std::cout << "III = 3: "            << interpreter.interpret ( "III" )          << '\n';
        std::cout << "IV = 4: "             << interpreter.interpret ( "IV" )           << '\n';
        std::cout << "V = 5: "              << interpreter.interpret ( "V" )            << '\n';
        std::cout << "VI = 6: "             << interpreter.interpret ( "VI" )           << '\n';
        std::cout << "VII = 7: "            << interpreter.interpret ( "VII" )          << '\n';
        std::cout << "VIII = 8: "           << interpreter.interpret ( "VIII" )         << '\n';
        std::cout << "IX = 9: "             << interpreter.interpret ( "IX" )           << '\n';
        std::cout << "X = 10: "             << interpreter.interpret ( "X" )            << '\n';

        std::cout << "XI = 11: "            << interpreter.interpret ( "XI" )           << '\n';
        std::cout << "XII = 12: "           << interpreter.interpret ( "XII" )          << '\n';
        std::cout << "XIII = 13: "          << interpreter.interpret ( "XIII" )         << '\n';
        std::cout << "XIV = 14: "           << interpreter.interpret ( "XIV" )          << '\n';
        std::cout << "XV = 15: "            << interpreter.interpret ( "XV" )           << '\n';
        std::cout << "XVI = 16: "           << interpreter.interpret ( "XVI" )          << '\n';
        std::cout << "XVII = 17: "          << interpreter.interpret ( "XVII" )         << '\n';
        std::cout << "XVIII = 18: "         << interpreter.interpret ( "XVIII" )        << '\n';
        std::cout << "XIX = 19: "           << interpreter.interpret ( "XIX" )          << '\n';
        std::cout << "XX = 20: "            << interpreter.interpret ( "XX" )           << '\n';

        std::cout << "XXI = 21: "           << interpreter.interpret ( "XXI" )          << '\n';
        std::cout << "XXII = 22: "          << interpreter.interpret ( "XXII" )         << '\n';
        std::cout << "XXIII = 23: "         << interpreter.interpret ( "XXIII" )        << '\n';
        std::cout << "XXIV = 24: "          << interpreter.interpret ( "XXIV" )         << '\n';
        std::cout << "XXV = 25: "           << interpreter.interpret ( "XXV" )          << '\n';
        std::cout << "XXVI = 26: "          << interpreter.interpret ( "XXVI" )         << '\n';
        std::cout << "XXVII = 27: "         << interpreter.interpret ( "XXVII" )        << '\n';
        std::cout << "XXVIII = 28: "        << interpreter.interpret ( "XXVIII" )       << '\n';
        std::cout << "XXIX = 29: "          << interpreter.interpret ( "XXIX" )         << '\n';
        std::cout << "XXX = 30: "           << interpreter.interpret ( "XXX" )          << '\n';

        std::cout << "CC = 200: "           << interpreter.interpret ( "CC" )           << '\n';
        std::cout << "CCC = 300: "          << interpreter.interpret ( "CCC" )          << '\n';
        std::cout << "DCCCLXXXVIII = 888: " << interpreter.interpret ( "DCCCLXXXVIII" ) << '\n';
        std::cout << "XX = 20: "            << interpreter.interpret ( "XX" )           << '\n';
        std::cout << "XX = 20: "            << interpreter.interpret ( "XX" )           << '\n';

        std::cout << "XCIX = 99: "          << interpreter.interpret ( "XCIX" )         << '\n';
        std::cout << "D = 500: "            << interpreter.interpret ( "D" )            << '\n';
        std::cout << "MM = 2000: "          << interpreter.interpret ( "MM" )           << '\n';
        std::cout << "MMMCMXCIX = 3999: "   << interpreter.interpret ( "MMMCMXCIX" )    << '\n';

        std::cout << "MMMM = 0: "           << interpreter.interpret ( "MMMM" )         << '\n';
        std::cout << "ID = 0: "             << interpreter.interpret ( "ID" )           << '\n';
        std::cout << "IC = 0: "             << interpreter.interpret ( "IC" )           << '\n';
        std::cout << "IIII = 0: "           << interpreter.interpret ( "IIII" )         << '\n';
        std::cout << "XXXX = 0: "           << interpreter.interpret ( "XXXX" )         << '\n';

        std::cout << "\ntestInterpretator(): end\n";
    }
}
