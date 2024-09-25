#pragma once

#include <assert.h>
#include <string>
#include <iostream>
using namespace std;

namespace WeatherSpace {
    class IWeatherSensor {
    public:
        virtual double TemperatureInC() const = 0;
        virtual int Precipitation() const = 0;
        virtual int Humidity() const = 0;
        virtual int WindSpeedKMPH() const = 0;
    };

    string Report(const IWeatherSensor& sensor);
}