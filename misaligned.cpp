#include <assert.h>
#include <iostream>

int printNumber(int i , int j ) {
    return (i * 5 + j);
}
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            std::cout << printNumber(i,j);
            std::cout<< " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);

    assert(printNumber(5,5) == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
