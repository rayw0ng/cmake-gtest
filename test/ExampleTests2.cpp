#include <gtest/gtest.h>
#include "../Example.hpp"

class ExampleTests2
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

TEST_F(ExampleTests2, Test1)
{
    EXPECT_EQ(x_, sum(1, 1));
}

TEST_F(ExampleTests2, Test2)
{
    EXPECT_LT(x_, sum(1, 2));
}

TEST(ExampleTest3, Test1)
{
    EXPECT_EQ(true, true);
}

TEST(ExampleTest3, Test2)
{
    EXPECT_EQ(true, false) << "this test should fail.";
}