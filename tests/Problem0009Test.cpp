#include <gtest/gtest.h>

#include <optional>

static std::optional<unsigned int> f() {
    for (unsigned int a = 1; a <= 1'000; a++) {
        for (unsigned int b = 1; b <= 1'000; b++) {
            unsigned int c = 1'000 - a - b;
            if (a * a + b * b == c * c) {
                return {a * b * c};
            }
        }
    }
    return {};
}

TEST(Problem0009, Solution) {
    EXPECT_EQ(f(), 31'875'000);
}
