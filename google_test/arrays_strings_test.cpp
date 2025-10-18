#include <gtest/gtest.h>

// Include the student's implementation
#include "../arrays_strings.cpp"

// Test cases

TEST(SimpleVectorTest, PushBack) {
    SimpleVector vec;
    vec.push_back(1);
    vec.push_back(2);
    EXPECT_EQ(vec.getSize(), 2);
    EXPECT_EQ(vec[0], 1);
    EXPECT_EQ(vec[1], 2);
}

TEST(SimpleVectorTest, Empty) {
    SimpleVector vec;
    EXPECT_TRUE(vec.empty());
    vec.push_back(1);
    EXPECT_FALSE(vec.empty());
}

TEST(SimpleVectorTest, Clear) {
    SimpleVector vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.clear();
    EXPECT_TRUE(vec.empty());
    EXPECT_EQ(vec.getSize(), 0);
}

TEST(SimpleVectorTest, PopBack) {
    SimpleVector vec;
    vec.push_back(1);
    vec.push_back(2);
    EXPECT_EQ(vec.pop_back(), 2);
    EXPECT_EQ(vec.getSize(), 1);
    EXPECT_EQ(vec.pop_back(), 1);
    EXPECT_EQ(vec.getSize(), 0);
}

TEST(SimpleVectorTest, PopBackEmpty) {
    SimpleVector vec;
    EXPECT_THROW(vec.pop_back(), std::out_of_range);
}

TEST(StringUtilsTest, Reverse) {
    EXPECT_EQ(StringUtils::reverse("hello"), "olleh");
    EXPECT_EQ(StringUtils::reverse(""), "");
    EXPECT_EQ(StringUtils::reverse("a"), "a");
}

TEST(StringUtilsTest, IsPalindrome) {
    EXPECT_TRUE(StringUtils::isPalindrome("racecar"));
    EXPECT_TRUE(StringUtils::isPalindrome("A man a plan a canal Panama"));
    EXPECT_FALSE(StringUtils::isPalindrome("hello"));
    EXPECT_TRUE(StringUtils::isPalindrome(""));
}

TEST(StringUtilsTest, CountWords) {
    EXPECT_EQ(StringUtils::countWords("Hello world"), 2);
    EXPECT_EQ(StringUtils::countWords("One"), 1);
    EXPECT_EQ(StringUtils::countWords(""), 0);
    EXPECT_EQ(StringUtils::countWords("  Multiple   spaces  "), 2);
}

TEST(StringUtilsTest, ToUpperCase) {
    EXPECT_EQ(StringUtils::toUpperCase("hello"), "HELLO");
    EXPECT_EQ(StringUtils::toUpperCase("Hello World"), "HELLO WORLD");
    EXPECT_EQ(StringUtils::toUpperCase(""), "");
}

TEST(StringUtilsTest, ToLowerCase) {
    EXPECT_EQ(StringUtils::toLowerCase("HELLO"), "hello");
    EXPECT_EQ(StringUtils::toLowerCase("Hello World"), "hello world");
    EXPECT_EQ(StringUtils::toLowerCase(""), "");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
