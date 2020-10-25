#ifndef ADAPTER_H
#define ADAPTER_H

#include <memory>

#include "usecase_adapter1.h"


namespace Adapter1_ {

    class Sensor
    {
    public:
        Sensor();
        virtual ~Sensor();

        virtual double get_temperature() const = 0;
        virtual void set_temperature ( double temperature ) = 0;
    };

    class CelsiumSensor: public Sensor
    {
    private:
        std::unique_ptr < FarenheitSensor > m_adaptee;
    public:
        CelsiumSensor ( std::unique_ptr < FarenheitSensor > adaptee );
        virtual ~CelsiumSensor() override;

        virtual double get_temperature() const override;
        virtual void set_temperature ( double temperature ) override;
    };

}
#endif // ADAPTER_H
