#include "gtest/gtest.h"
#include "lib/counter/counter.h"

TEST(Counter, init)
{
    Counter c = Counter(4);
    
    EXPECT_EQ(c.getCount(), 4);
}

TEST(Counter, increment)
{
    auto c = Counter(5);
    c.increment(5);

    EXPECT_EQ(c.getCount(), 10);
}