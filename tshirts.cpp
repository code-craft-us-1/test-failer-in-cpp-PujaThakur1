#include <assert.h>
#include <iostream>

namespace TShirt {
    char size(int cms) {
        char sizeName = '\0';
        if (cms < 38) {
            sizeName = 'S';
        } else if (cms >= 38 && cms < 42) {
            sizeName = 'M';
        } else if (cms >= 42) {
            sizeName = 'L';
        }
        return sizeName;
    }

    void TestSize() {
        assert(size(37) == 'S');
        assert(size(38) == 'M');
        assert(size(41) == 'M');
        assert(size(42) == 'L');
    }
}  // namespace TShirt
