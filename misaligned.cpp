#include"MisAligned.h"

namespace MisAligned {
    int printNumber(int i, int j) {
        return (i * 5 + j) + 1; }

    int printColorMap() {
        const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
        const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
        int i = 0, j = 0;
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                std::cout << printNumber(i, j);
                std::cout << " | " << majorColor[i] << " | " << minorColor[i] << "\n"; } }
        return i * j; }

    void testPrintColorMap() {
        int result = printColorMap();

        assert(result == 25);
        assert(printNumber(0, 0) == 1);
        assert(printNumber(4, 4) == 25);
        std::cout << "All is well \n"; }
}  // namespace MisAligned

int main() {
    MisAligned::testPrintColorMap();
    return 0;
}
