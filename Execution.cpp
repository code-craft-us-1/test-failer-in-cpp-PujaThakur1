#include "WeatherReportTest.h"
#include"MisAligned.h"
#include"TShirt.h"

int main() {
    WeatherSpaceTest::TestRainy();
    WeatherSpaceTest::TestHighPrecipitationAndLowWindspeed();
    cout << "All is well in weather Reporting\n";

    MisAligned::testPrintColorMap();

    TShirt::TestSize();
    return 0;
}