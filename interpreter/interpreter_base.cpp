#include "interpreter_base.h"

Interpreter_base::Interpreter_base()
    : mThousands { new Thousands },
      mHundreds { new Hundreds },
      mTens { new Tens },
      mOnes { new Ones }
{}
Interpreter_base::Interpreter_base ( int )
{}
Interpreter_base::~Interpreter_base()
{
    delete mThousands;
    delete mHundreds;
    delete mTens;
    delete mOnes;
}

bool Interpreter_base::copySubstring ( char *destination,
                                       const char *source,
                                       int startIndex,
                                       int length ) const
{
    for ( int index = 0; index < length; ++index )
    {
        if ( source[index + startIndex] != '\0' )
            destination[index] = source[index + startIndex];
        else
        {
            destination[index] = '\0';
            return false;
        }
    }
    destination[length] = '\0';

    return true;
}
void Interpreter_base::interpret ( const char *input, int &result, int &index ) const
{
    char firstSymbol[2];
    copySubstring ( firstSymbol, input, index, 1 );
    char firstTwoSymbols[3];
    copySubstring ( firstTwoSymbols, input, index, 2 );

    if ( ! strcmp ( firstTwoSymbols, this->nine() ) )
    {
        result += 9 * this->multiplier();
        index += 2;
    }
    else if ( ! strcmp ( firstTwoSymbols, this->four() ) )
    {
        result += 4 * this->multiplier();
        index += 2;
    }
    else
    {
        if ( ! strcmp ( firstSymbol, this->five() ) )
        {
            result += 5 * this->multiplier();
            ++index;
        }

        char firstThreeSymbols[4];
        copySubstring ( firstThreeSymbols, input, index, 3 );

        for ( int indexOfThree = 0; indexOfThree < 3; ++indexOfThree )
        {
            if ( firstThreeSymbols[indexOfThree] != '\0' && firstThreeSymbols[indexOfThree] == this->one()[0] )
            {
                result += 1 * this->multiplier();
                ++index;
            }
            else
                break;
        }
    }
}
int Interpreter_base::interpret ( const char *input ) const
{
    int result = 0;
    int index = 0;

    mThousands->interpret ( input, result, index );
    mHundreds->interpret ( input, result, index );
    mTens->interpret ( input, result, index );
    mOnes->interpret ( input, result, index );

    if ( input[index] != '\0' )
        return 0;

    return result;
}
const char* Interpreter_base::nine() const
{
    return "";
}
const char* Interpreter_base::five() const
{
    return "";
}
const char* Interpreter_base::four() const
{
    return "";
}
const char* Interpreter_base::one() const
{
    return "";
}
int Interpreter_base::multiplier() const
{
    return 0;
}

Thousands::Thousands() : Interpreter_base ( 1 )
{}
Thousands::~Thousands()
{}
const char* Thousands::nine() const
{
    return "\0";
}
const char* Thousands::five() const
{
    return "\0";
}
const char* Thousands::four() const
{
    return "\0";
}
const char* Thousands::one() const
{
    return "M";
}
int Thousands::multiplier() const
{
    return 1000;
}

Hundreds::Hundreds() : Interpreter_base ( 1 )
{}
Hundreds::~Hundreds()
{}
const char* Hundreds::nine() const
{
    return "CM";
}
const char* Hundreds::five() const
{
    return "D";
}
const char* Hundreds::four() const
{
    return "CD";
}
const char* Hundreds::one() const
{
    return "C";
}
int Hundreds::multiplier() const
{
    return 100;
}


Tens::Tens() : Interpreter_base ( 1 )
{}
Tens::~Tens()
{}
const char* Tens::nine() const
{
    return "XC";
}
const char* Tens::five() const
{
    return "L";
}
const char* Tens::four() const
{
    return "XL";
}
const char* Tens::one() const
{
    return "X";
}
int Tens::multiplier() const
{
    return 10;
}

Ones::Ones() : Interpreter_base ( 1 )
{}
Ones::~Ones()
{}
const char* Ones::nine() const
{
    return "IX";
}
const char* Ones::five() const
{
    return "V";
}
const char* Ones::four() const
{
    return "IV";
}
const char* Ones::one() const
{
    return "I";
}
int Ones::multiplier() const
{
    return 1;
}
