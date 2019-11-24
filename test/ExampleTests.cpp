#include <gtest/gtest.h>
#include "../Example.hpp"

class ExampleTests
    : public ::testing::Test
{
protected:
    void SetUp() override
    {
        x_ = 2;
    }

    void TearDown() override
    {
    }

    int x_;
};

TEST_F(ExampleTests, Test1)
{
    EXPECT_EQ(x_, sum(1, 1));
}

TEST_F(ExampleTests, Test2)
{
    EXPECT_LT(x_, sum(1, 2));
}
