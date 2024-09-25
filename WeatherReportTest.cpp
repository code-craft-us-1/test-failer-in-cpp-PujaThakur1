
#include "WeatherReportTest.h"

namespace WeatherSpaceTest {
    void TestRainy() {
        SensorStub sensor;
        string report = WeatherSpace::Report(sensor);
        cout << report << endl;
        assert(report.find("rain") != string::npos);
        assert(report.find("Sunny") == string::npos);
        assert(report.find("cloudy") == string::npos);}

    void TestHighPrecipitationAndLowWindspeed() {
        // This instance of stub needs to be different-
        // to give high precipitation (>60) and low wind-speed (<50)
        SensorStub sensor;

        // strengthen the assert to expose the bug
        string report = WeatherSpace::Report(sensor);
        assert(report.length() > 0);
    }
}
