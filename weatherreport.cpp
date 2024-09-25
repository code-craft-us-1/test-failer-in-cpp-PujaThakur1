
#include "WeatherReport.h"
#include"weatherreportTest.h"

namespace WeatherSpace {

string Report(const IWeatherSensor& sensor) {
    int precipitation = sensor.Precipitation();
    // precipitation < 20 is a sunny day
    string report = "Sunny day";

    if (sensor.TemperatureInC() > 25) {
        if (precipitation >= 20 && precipitation < 60)
            report = "Partly cloudy";
        else if (sensor.WindSpeedKMPH() > 50)
            report = "Alert, Stormy with heavy rain";
    }
    return report;
}

}  //// namespace WeatherSpace

int main() {
    WeatherSpaceTest::TestRainy();
    WeatherSpaceTest::TestHighPrecipitationAndLowWindspeed();
    cout << "All is well in weather Reporting\n";
}
