#ifndef INTERPRETER1_H
#define INTERPRETER1_H

#include <iostream>

namespace Interpreter1_ {

    class Thousands;
    class Hundreds;
    class Tens;
    class Ones;

    class Interpreter1
    {
    public:
        Interpreter1();
        Interpreter1 ( int );
        virtual ~Interpreter1();
        int interpret ( const std::string &input );
        virtual void interpret ( const std::string &input, int &current_result, std::size_t &index );


    protected:
        virtual char one();
        virtual char five();
        virtual std::string four();
        virtual std::string nine();
        virtual int multiplier();


    private:
        Thousands *m_thousands;
        Hundreds *m_hundreds;
        Tens *m_tens;
        Ones *m_ones;
    };


    class Thousands : public Interpreter1
    {
    public:
        Thousands();
        virtual ~Thousands() override;


    protected:
        virtual char one() override;
        virtual char five() override;
        virtual std::string four() override;
        virtual std::string nine() override;
        virtual int multiplier() override;
    };


    class Hundreds : public Interpreter1
    {
    public:
        Hundreds();
        virtual ~Hundreds() override;


    protected:
        virtual char one() override;
        virtual char five() override;
        virtual std::string four() override;
        virtual std::string nine() override;
        virtual int multiplier() override;
    };


    class Tens : public Interpreter1
    {
    public:
        Tens();
        virtual ~Tens() override;


    protected:
        virtual char one() override;
        virtual char five() override;
        virtual std::string four() override;
        virtual std::string nine() override;
        virtual int multiplier() override;
    };


    class Ones : public Interpreter1
    {
    public:
        Ones();
        virtual ~Ones() override;


    protected:
        virtual char one() override;
        virtual char five() override;
        virtual std::string four() override;
        virtual std::string nine() override;
        virtual int multiplier() override;
    };

}

#endif // INTERPRETER1_H
