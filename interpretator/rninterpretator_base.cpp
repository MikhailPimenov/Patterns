#include "rninterpretator_base.h"

RNInterpretator_base::RNInterpretator_base()
    : mThousands { std::make_unique < Thousands > () },
      mHundreds { std::make_unique < Hundreds > () },
      mTens { std::make_unique < Tens > () },
      mOnes { std::make_unique < Ones > () }
{
}
RNInterpretator_base::RNInterpretator_base ( int )
{}
RNInterpretator_base::~RNInterpretator_base()
{}
int RNInterpretator_base::interpret ( const std::string &input )
{
    mInput.assign ( input );
    int result { 0 };

    mThousands.get()->interpret ( mInput, result );
    mHundreds.get()->interpret ( mInput, result );
    mTens.get()->interpret ( mInput, result );
    mOnes.get()->interpret ( mInput, result );

    if ( ! mInput.empty() )
        return 0;

    return result;
}
void RNInterpretator_base::getSubstring ( const std::string &source,
                    std::string &destination,
                    std::size_t startIndex, std::size_t length ) const
{
    destination.reserve ( length );
    destination.assign ( source, startIndex, length );

    while ( destination.length() < length )
        destination.push_back ( ' ' );
}
const std::string& RNInterpretator_base::interpret ( std::string &input, int &result ) const
{
    std::size_t index { 0 };

    std::string firstTwoSymbols;
    getSubstring ( input, firstTwoSymbols, 0u, 2u );

    while ( firstTwoSymbols.length() < 2 )
        firstTwoSymbols.push_back ( ' ' );

    if ( firstTwoSymbols == this->nine() )
    {
        result += 9 * this->multiplier();
        index += 2u;
    }
    else if ( firstTwoSymbols == this->four() )
    {
        result += 4 * this->multiplier();
        index += 2u;
    }
    else
    {
        std::string firstSymbol;
        getSubstring ( input, firstSymbol, 0u, 1u );

        if ( firstSymbol == this->five() )
        {
            result += 5 * this->multiplier();
            ++index;
        }

        std::string firstThreeSymbols;
        getSubstring ( input, firstThreeSymbols, index, 3u );

        for ( size_t indexToOnes = 0u; indexToOnes < 3u; ++indexToOnes )
        {
            if ( firstThreeSymbols.at ( indexToOnes ) == this->one().at ( 0 ) )
            {
                result += 1 * this->multiplier();
                ++index;
            }
            else
                break;
        }
    }

    return input.assign ( input, index, input.length() - index );
}
const std::string& RNInterpretator_base::nine() const
{
    static std::string stringToReturn; // lazy initialization
    return stringToReturn;
}
const std::string& RNInterpretator_base::five() const
{
    return this->nine();
}
const std::string& RNInterpretator_base::four() const
{
    return this->nine();
}
const std::string& RNInterpretator_base::one() const
{
    return this->nine();
}
int RNInterpretator_base::multiplier() const
{
    return 0;
}

Thousands::Thousands() : RNInterpretator_base ( 1 )
{}
Thousands::~Thousands()
{}
const std::string& Thousands::nine() const
{
    static std::string nine = "";
    return nine;
}
const std::string& Thousands::five() const
{
    static std::string five = "";
    return five;
}
const std::string& Thousands::four() const
{
    static std::string four = "";
    return four;
}
const std::string& Thousands::one() const
{
    static std::string one = "M";
    return one;
}
int Thousands::multiplier() const
{
    return 1000;
}

Hundreds::Hundreds() : RNInterpretator_base ( 1 )
{}
Hundreds::~Hundreds()
{}
const std::string& Hundreds::nine() const
{
    static std::string nine = "CM";
    return nine;
}
const std::string& Hundreds::five() const
{
    static std::string five = "D";
    return five;
}
const std::string& Hundreds::four() const
{
    static std::string four = "CD";
    return four;
}
const std::string& Hundreds::one() const
{
    static std::string one = "C";
    return one;
}
int Hundreds::multiplier() const
{
    return 100;
}

Tens::Tens() : RNInterpretator_base ( 1 )
{}
Tens::~Tens()
{}
const std::string& Tens::nine() const
{
    static std::string nine = "XC";
    return nine;
}
const std::string& Tens::five() const
{
    static std::string five = "L";
    return five;
}
const std::string& Tens::four() const
{
    static std::string four = "XL";
    return four;
}
const std::string& Tens::one() const
{
    static std::string one = "X";
    return one;
}
int Tens::multiplier() const
{
    return 10;
}

Ones::Ones() : RNInterpretator_base ( 1 )
{}
Ones::~Ones()
{}
const std::string& Ones::nine() const
{
    static std::string nine = "IX";
    return nine;
}
const std::string& Ones::five() const
{
    static std::string five = "V";
    return five;
}
const std::string& Ones::four() const
{
    static std::string four = "IV";
    return four;
}
const std::string& Ones::one() const
{
    static std::string one = "I";
    return one;
}
int Ones::multiplier() const
{
    return 1;
}
