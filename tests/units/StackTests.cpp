#include <Leet/stack.hpp>
#include <gtest/gtest.h>

namespace stack
{
    TEST(StackTest, IsValid1)
    {
        std::string s = "()";
        EXPECT_TRUE(stack::isValid(s));
    }

    TEST(StackTest, IsValid2)
    {
        std::string s = "()[]{}";
        EXPECT_TRUE(stack::isValid(s));
    }

    TEST(StackTest, IsValid3)
    {
        std::string s = "(]";
        EXPECT_FALSE(stack::isValid(s));
    }

    TEST(StackTest, IsValid4)
    {
        std::string s = "([])";
        EXPECT_TRUE(stack::isValid(s));
    }

    TEST(StackTest, IsValid5)
    {
        std::string s = "([)]";
        EXPECT_FALSE(stack::isValid(s));
    }
}
