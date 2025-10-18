// Lab 02: Arrays and Strings
// Implement a simple dynamic array (SimpleVector) and string utilities (StringUtils)
// Follow the TODO comments to complete the implementation
// Run the tests with: g++ arrays_strings_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o arrays_strings_test && ./arrays_strings_test

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

// TODO: Include any additional headers you need (e.g., <stdexcept> for exceptions)

// Simple dynamic array implementation
class SimpleVector {
private:
    int* data;
    size_t capacity;
    size_t size;

public:
    SimpleVector() : data(nullptr), capacity(0), size(0) {}

    ~SimpleVector() {
        // TODO: Free the allocated memory
    }

    void push_back(int value) {
        // TODO: Implement push_back with dynamic resizing
        // Double capacity if needed, copy data, add value
    }

    int& operator[](size_t index) {
        // TODO: Return reference to data[index]
    }

    size_t getSize() const {
        // TODO: Return size
    }

    bool empty() const {
        // TODO: Return true if size == 0
    }

    void clear() {
        // TODO: Set size to 0
    }

    int pop_back() {
        // TODO: Remove and return last element, throw if empty
    }
};

// String utility functions
class StringUtils {
public:
    static std::string reverse(const std::string& str) {
        // TODO: Reverse the string
    }

    static bool isPalindrome(const std::string& str) {
        // TODO: Check if palindrome (normalize input)
    }

    static int countWords(const std::string& str) {
        // TODO: Count words in string
    }

    static std::string toUpperCase(const std::string& str) {
        // TODO: Convert to uppercase
    }

    static std::string toLowerCase(const std::string& str) {
        // TODO: Convert to lowercase
    }
};

int main() {
    // TODO: Add your own test code here if needed
    std::cout << "Implement the classes and run the tests!" << std::endl;
    return 0;
}
