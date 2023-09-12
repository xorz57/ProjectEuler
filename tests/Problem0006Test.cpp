#include <gtest/gtest.h>

static unsigned int f(unsigned int n) {
    unsigned int sum1 = 0;
    unsigned int sum2 = 0;
    for (unsigned int i = 1; i <= n; i++) {
        sum1 += i * i;
        sum2 += i;
    }
    return sum2 * sum2 - sum1;
}

TEST(Problem0006, Test1) {
    EXPECT_EQ(f(10), 2'640);
    EXPECT_EQ(f(100), 25'164'150);
}