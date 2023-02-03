#include <gtest/gtest.h>

static unsigned int f(unsigned int n) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < n; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum += i;
        }
    }
    return sum;
}

TEST(Problem0001, Solution) {
    EXPECT_EQ(f(10), 23);
    EXPECT_EQ(f(1'000), 233'168);
}
