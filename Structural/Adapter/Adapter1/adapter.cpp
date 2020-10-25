#include "adapter.h"

namespace Adapter1_ {

    Sensor::Sensor()
    {}
    Sensor::~Sensor()
    {}

    CelsiumSensor::CelsiumSensor ( std::unique_ptr < FarenheitSensor > adaptee )
        : m_adaptee { std::move ( adaptee ) }
    {}

    CelsiumSensor::~CelsiumSensor() {}
    void CelsiumSensor::set_temperature ( double temperature )
    {
        this->m_adaptee.get()->set_temperature ( temperature * 9.0 / 4.0 + 32.0 );
    }
    double CelsiumSensor::get_temperature() const
    {
        return ( this->m_adaptee.get()->get_temperature() - 32.0 ) * 4.0 / 9.0;
    }

}
