#ifndef RNINTERPRETATOR_BASE_H
#define RNINTERPRETATOR_BASE_H

#include <iostream>
#include <memory>

class Thousands;
class Hundreds;
class Tens;
class Ones;

class RNInterpretator_base
{
private:
    std::unique_ptr < Thousands > mThousands;
    std::unique_ptr < Hundreds > mHundreds;
    std::unique_ptr < Tens > mTens;
    std::unique_ptr < Ones > mOnes;
    std::string mInput;

public:
    RNInterpretator_base();
    RNInterpretator_base ( int ); // to prevent loop in constructors of derrivative classes

    virtual ~RNInterpretator_base();

    int interpret ( const std::string &input );
    virtual const std::string& interpret ( std::string &input, int &multiplier ) const;

    virtual const std::string& nine() const;
    virtual const std::string& five() const;
    virtual const std::string& four() const;
    virtual const std::string& one() const;
    virtual int multiplier() const;

private:
    void getSubstring ( const std::string &source,
                        std::string &destination,
                        std::size_t startIndex, std::size_t length ) const;
};

class Thousands : public RNInterpretator_base
{
public:
    Thousands();
    virtual ~Thousands() override;

    virtual const std::string& nine() const override;
    virtual const std::string& five() const override;
    virtual const std::string& four() const override;
    virtual const std::string& one() const override;
    virtual int multiplier() const override;
};

class Hundreds : public RNInterpretator_base
{
public:
    Hundreds();
    virtual ~Hundreds() override;

    virtual const std::string& nine() const override;
    virtual const std::string& five() const override;
    virtual const std::string& four() const override;
    virtual const std::string& one() const override;
    virtual int multiplier() const override;
};

class Tens : public RNInterpretator_base
{
public:
    Tens();
    virtual ~Tens() override;

    virtual const std::string& nine() const override;
    virtual const std::string& five() const override;
    virtual const std::string& four() const override;
    virtual const std::string& one() const override;
    virtual int multiplier() const override;
};

class Ones : public RNInterpretator_base
{
public:
    Ones();
    virtual ~Ones() override;

    virtual const std::string& nine() const override;
    virtual const std::string& five() const override;
    virtual const std::string& four() const override;
    virtual const std::string& one() const override;
    virtual int multiplier() const override;
};
#endif // RNINTERPRETATOR_BASE_H
