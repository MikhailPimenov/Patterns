#ifndef USECASE_ADAPTER1_H
#define USECASE_ADAPTER1_H


namespace Adapter1_ {

    class FarenheitSensor
    {
    private:
        double m_temperature;
    public:
        FarenheitSensor ( double temperature = 0 );
        virtual ~FarenheitSensor();

        void set_temperature ( double temperature );
        double get_temperature() const;
    };

}

#endif // USECASE_ADAPTER1_H
