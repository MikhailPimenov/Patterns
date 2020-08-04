#ifndef INTERPRETER_BASE_H
#define INTERPRETER_BASE_H

#include <cstring>

class Thousands;
class Hundreds;
class Tens;
class Ones;
class Interpreter_base
{
private:
    Thousands *mThousands;
    Hundreds *mHundreds;
    Tens *mTens;
    Ones *mOnes;

public:
    Interpreter_base();
    Interpreter_base ( int );
    virtual ~Interpreter_base();

    int interpret ( const char *input ) const;
    virtual void interpret ( const char *input, int &result, int &index ) const;

private:
    virtual const char* nine() const;
    virtual const char* five() const;
    virtual const char* four() const;
    virtual const char* one() const;
    virtual int multiplier() const;

    bool copySubstring ( char *destination, const char *source, int startIndex, int length ) const;

};

class Thousands : public Interpreter_base
{
public:
    Thousands();
    virtual ~Thousands() override;

    virtual const char* nine() const override;
    virtual const char* five() const override;
    virtual const char* four() const override;
    virtual const char* one() const override;
    virtual int multiplier() const override;
};

class Hundreds : public Interpreter_base
{
public:
    Hundreds();
    virtual ~Hundreds() override;

    virtual const char* nine() const override;
    virtual const char* five() const override;
    virtual const char* four() const override;
    virtual const char* one() const override;
    virtual int multiplier() const override;
};

class Tens : public Interpreter_base
{
public:
    Tens();
    virtual ~Tens() override;

    virtual const char* nine() const override;
    virtual const char* five() const override;
    virtual const char* four() const override;
    virtual const char* one() const override;
    virtual int multiplier() const override;
};

class Ones : public Interpreter_base
{
public:
    Ones();
    virtual ~Ones() override;

    virtual const char* nine() const override;
    virtual const char* five() const override;
    virtual const char* four() const override;
    virtual const char* one() const override;
    virtual int multiplier() const override;
};
#endif // INTERPRETER_BASE_H
