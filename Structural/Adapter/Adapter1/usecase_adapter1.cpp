#include "usecase_adapter1.h"

namespace Adapter1_ {

    FarenheitSensor::FarenheitSensor ( double temperature )
        : m_temperature{temperature}
    {}
    FarenheitSensor::~FarenheitSensor() {}
    void FarenheitSensor::set_temperature ( double temperature )
    {
        this->m_temperature = temperature;
    }
    double FarenheitSensor::get_temperature() const
    {
        return this->m_temperature;
    }


}
