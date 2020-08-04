#include <iostream>

// patterns: interpretator
#include "interpretator/rninterpretator_base.h"

void testInterpretator()
{
    RNInterpretator_base interpretator;

    std::cout << "I = 1: "              << interpretator.interpret ( "I" )            << '\n';
    std::cout << "II = 2: "             << interpretator.interpret ( "II" )           << '\n';
    std::cout << "III = 3: "            << interpretator.interpret ( "III" )          << '\n';
    std::cout << "IV = 4: "             << interpretator.interpret ( "IV" )           << '\n';
    std::cout << "V = 5: "              << interpretator.interpret ( "V" )            << '\n';
    std::cout << "VI = 6: "             << interpretator.interpret ( "VI" )           << '\n';
    std::cout << "VII = 7: "            << interpretator.interpret ( "VII" )          << '\n';
    std::cout << "VIII = 8: "           << interpretator.interpret ( "VIII" )         << '\n';
    std::cout << "IX = 9: "             << interpretator.interpret ( "IX" )           << '\n';
    std::cout << "X = 10: "             << interpretator.interpret ( "X" )            << '\n';

    std::cout << "XI = 11: "            << interpretator.interpret ( "XI" )           << '\n';
    std::cout << "XII = 12: "           << interpretator.interpret ( "XII" )          << '\n';
    std::cout << "XIII = 13: "          << interpretator.interpret ( "XIII" )         << '\n';
    std::cout << "XIV = 14: "           << interpretator.interpret ( "XIV" )          << '\n';
    std::cout << "XV = 15: "            << interpretator.interpret ( "XV" )           << '\n';
    std::cout << "XVI = 16: "           << interpretator.interpret ( "XVI" )          << '\n';
    std::cout << "XVII = 17: "          << interpretator.interpret ( "XVII" )         << '\n';
    std::cout << "XVIII = 18: "         << interpretator.interpret ( "XVIII" )        << '\n';
    std::cout << "XIX = 19: "           << interpretator.interpret ( "XIX" )          << '\n';
    std::cout << "XX = 20: "            << interpretator.interpret ( "XX" )           << '\n';

    std::cout << "XXI = 21: "           << interpretator.interpret ( "XXI" )          << '\n';
    std::cout << "XXII = 22: "          << interpretator.interpret ( "XXII" )         << '\n';
    std::cout << "XXIII = 23: "         << interpretator.interpret ( "XXIII" )        << '\n';
    std::cout << "XXIV = 24: "          << interpretator.interpret ( "XXIV" )         << '\n';
    std::cout << "XXV = 25: "           << interpretator.interpret ( "XXV" )          << '\n';
    std::cout << "XXVI = 26: "          << interpretator.interpret ( "XXVI" )         << '\n';
    std::cout << "XXVII = 27: "         << interpretator.interpret ( "XXVII" )        << '\n';
    std::cout << "XXVIII = 28: "        << interpretator.interpret ( "XXVIII" )       << '\n';
    std::cout << "XXIX = 29: "          << interpretator.interpret ( "XXIX" )         << '\n';
    std::cout << "XXX = 30: "           << interpretator.interpret ( "XXX" )          << '\n';

    std::cout << "CC = 200: "           << interpretator.interpret ( "CC" )           << '\n';
    std::cout << "CCC = 300: "          << interpretator.interpret ( "CCC" )          << '\n';
    std::cout << "DCCCLXXXVIII = 888: " << interpretator.interpret ( "DCCCLXXXVIII" ) << '\n';
    std::cout << "XX = 20: "            << interpretator.interpret ( "XX" )           << '\n';
    std::cout << "XX = 20: "            << interpretator.interpret ( "XX" )           << '\n';

    std::cout << "XCIX = 99: "          << interpretator.interpret ( "XCIX" )         << '\n';
    std::cout << "D = 500: "            << interpretator.interpret ( "D" )            << '\n';
    std::cout << "MM = 2000: "          << interpretator.interpret ( "MM" )           << '\n';
    std::cout << "MMMCMXCIX = 3999: "   << interpretator.interpret ( "MMMCMXCIX" )    << '\n';

    std::cout << "MMMM = 0: "           << interpretator.interpret ( "MMMM" )         << '\n';
    std::cout << "ID = 0: "             << interpretator.interpret ( "ID" )           << '\n';
    std::cout << "IC = 0: "             << interpretator.interpret ( "IC" )           << '\n';
    std::cout << "IIII = 0: "           << interpretator.interpret ( "IIII" )         << '\n';
    std::cout << "XXXX = 0: "           << interpretator.interpret ( "XXXX" )         << '\n';

    std::cout << "\ntestInterpretator(): end\n";
}

int main()
{
    testInterpretator();
    std::cout << "main(): end\n";

    return 0;
}
