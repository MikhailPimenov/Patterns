#include <iostream>
#include <map>
#include <memory>
#include <vector>

// patterns: adapter

class FarenheitSensor
{
public:
    FarenheitSensor() = default;
    virtual ~FarenheitSensor() {}

    float get() const
    {
        float degree = 100.0f;
        return degree;
    }
};

class Sensor
{
public:
    Sensor() = default;
    virtual ~Sensor() {}

    virtual float get() const = 0;
};

class CelsiumSensorAdapter : public Sensor
{
private:
    std::unique_ptr < FarenheitSensor > mFarenheitSensor;
public:
    CelsiumSensorAdapter ( std::unique_ptr < FarenheitSensor > farenheitSensor )
        : mFarenheitSensor { std::move ( farenheitSensor ) }
    {}

    virtual float get() const override
    {
        if ( mFarenheitSensor )
            return CelsiumSensorAdapter::fromFarenheitToCelsium ( mFarenheitSensor.get()->get() );

        return 0.0f;
    }

private:
    static float fromFarenheitToCelsium ( float farenheit )
    {
        return 5.0f / 9.0f * ( farenheit - 32.0f );
    }
};

void testAdapter()
{
    std::unique_ptr < FarenheitSensor > fs ( std::make_unique < FarenheitSensor > () );

    float celsium;
    CelsiumSensorAdapter csa ( std::move ( fs ) );
    celsium = csa.get();

    std::cout << "Celsium: " << celsium << "'C\n";

    std::cout << "testAdapter(): end\n";
}

int main()
{
    testAdapter();
    std::cout << "main(): end\n";
    return 0;
}
