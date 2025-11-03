#include "pch.h"

// Include your arrays_strings.cpp file here
#include "C:\Users\rache\OneDrive\Documents\Data Structures and Algorithms\Lab 2\CIS_17C_Lab_02\arrays_strings.cpp"

TEST(SimpleVectorTest, Constructor) {
    SimpleVector vec;
    EXPECT_EQ(vec.getSize(), 0);
    EXPECT_TRUE(vec.empty());
}

TEST(SimpleVectorTest, PushBack) {
    SimpleVector vec;
    vec.push_back(1);
    EXPECT_EQ(vec.getSize(), 1);
    EXPECT_FALSE(vec.empty());
    // Assuming operator[] works
    // EXPECT_EQ(vec[0], 1);
}

TEST(SimpleVectorTest, Clear) {
    SimpleVector vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.clear();
    EXPECT_EQ(vec.getSize(), 0);
    EXPECT_TRUE(vec.empty());
}

TEST(StringUtilsTest, Reverse) {
    std::string result = StringUtils::reverse("hello");
    EXPECT_EQ(result, "olleh");
}

TEST(StringUtilsTest, ToUpperCase) {
    std::string result = StringUtils::toUpperCase("hello");
    EXPECT_EQ(result, "HELLO");
}

TEST(StringUtilsTest, ToLowerCase) {
    std::string result = StringUtils::toLowerCase("HELLO");
    EXPECT_EQ(result, "hello");
}

TEST(StringUtilsTest, IsPalindrome) {
    EXPECT_TRUE(StringUtils::isPalindrome("racecar"));
    EXPECT_FALSE(StringUtils::isPalindrome("hello"));
}

TEST(StringUtilsTest, CountWords) {
    EXPECT_EQ(StringUtils::countWords("Hello World"), 2);
    EXPECT_EQ(StringUtils::countWords("One"), 1);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}