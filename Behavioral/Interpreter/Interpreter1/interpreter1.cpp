#include "interpreter1.h"

namespace Interpreter1_ {

    Interpreter1::Interpreter1()
    {}
    Interpreter1::Interpreter1 ( int )
    {}
    Interpreter1::~Interpreter1()
    {
        if ( this->m_thousands )
            delete this->m_thousands;
        if ( this->m_hundreds )
            delete this->m_hundreds;
        if ( this->m_tens )
            delete this->m_tens;
        if ( this->m_ones )
            delete this->m_ones;
    }

    int Interpreter1::interpret ( const std::string &input )
    {
        this->m_thousands = new Thousands;
        this->m_hundreds  = new Hundreds;
        this->m_tens      = new Tens;
        this->m_ones      = new Ones;


        int result = 0;
        std::size_t index = 0;
        this->m_thousands->interpret ( input, result, index );
        this->m_hundreds->interpret ( input, result, index );
        this->m_tens->interpret ( input, result, index );
        this->m_ones->interpret ( input, result, index );

        if ( index == input.size() )
            return result;
        else
            return 0;
    }

    void Interpreter1::interpret ( const std::string &input, int &current_result, std::size_t &index )
    {
        if ( input.substr ( index, 2 ) == four() ) {
            current_result += 4 * multiplier();
            index += 2;
        } else if ( input.substr ( index, 2 ) == nine() ) {
            current_result += 9 * multiplier();
            index += 2;
        } else {
            if ( input[index] == five() ) {
                current_result += 5 * multiplier();
                ++index;
            }

            for ( std::size_t end = index + 3; index < end; ++index ) {
                if ( input[index] == one() )
                    current_result += 1 * multiplier();
                else
                    break;
            }
        }
    }

    char Interpreter1::one()
    {
        return '\0';
    }
    char Interpreter1::five()
    {
        return '\0';
    }
    std::string Interpreter1::four()
    {
        return std::string ( "" );
    }
    std::string Interpreter1::nine()
    {
        return std::string ( "" );
    }
    int Interpreter1::multiplier()
    {
        return 0;
    }



    Thousands::Thousands()
        : Interpreter1 ( 1 )
    {}
    Thousands::~Thousands()
    {}
    char Thousands::one()
    {
        return 'M';
    }
    char Thousands::five()
    {
        return '\0';
    }
    std::string Thousands::four()
    {
        return std::string ( "" );
    }
    std::string Thousands::nine()
    {
        return std::string ( "" );
    }
    int Thousands::multiplier()
    {
        return 1000;
    }


    Hundreds::Hundreds()
        : Interpreter1 ( 1 )
    {}
    Hundreds::~Hundreds()
    {}
    char Hundreds::one()
    {
        return 'C';
    }
    char Hundreds::five()
    {
        return 'D';
    }
    std::string Hundreds::four()
    {
        return std::string ( "CD" );
    }
    std::string Hundreds::nine()
    {
        return std::string ( "CM" );
    }
    int Hundreds::multiplier()
    {
        return 100;
    }


    Tens::Tens()
        : Interpreter1 ( 1 )
    {}
    Tens::~Tens()
    {}
    char Tens::one()
    {
        return 'X';
    }
    char Tens::five()
    {
        return 'L';
    }
    std::string Tens::four()
    {
        return std::string ( "XL" );
    }
    std::string Tens::nine()
    {
        return std::string ( "XC" );
    }
    int Tens::multiplier()
    {
        return 10;
    }


    Ones::Ones()
        : Interpreter1 ( 1 )
    {}
    Ones::~Ones()
    {}
    char Ones::one()
    {
        return 'I';
    }
    char Ones::five()
    {
        return 'V';
    }
    std::string Ones::four()
    {
        return std::string ( "IV" );
    }
    std::string Ones::nine()
    {
        return std::string ( "IX" );
    }
    int Ones::multiplier()
    {
        return 1;
    }


}
