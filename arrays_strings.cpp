// arrays_strings.cpp
#include "arrays_strings.h"
#include <sstream>

// Implementations
SimpleVector::SimpleVector() : data(nullptr), capacity(0), size(0) {}

SimpleVector::~SimpleVector() {
    // TODO: Free the allocated memory
    delete[] data;
}

void SimpleVector::push_back(int value) {
    // TODO: Implement push_back with dynamic resizing
    // Double capacity if needed, copy data, add value
    if (size >= capacity) {
        size_t newCapacity;
        if (capacity == 0) {
            newCapacity = 1;
        }
        else {
            newCapacity = capacity * 2;
        }

        int* newData = new int[newCapacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

    data[size++] = value;
}


int& SimpleVector::operator[](size_t index) {
    // TODO: Return reference to data[index]
    if(index >= size) {
        throw std::out_of_range("Index out of range");
	}
	return data[index];
}

size_t SimpleVector::getSize() const {
    // TODO: Return size
	return size;
}

bool SimpleVector::empty() const {
    // TODO: Return true if size == 0
	return size == 0;
}

void SimpleVector::clear() {
    // TODO: Set size to 0
	size = 0;
}

int SimpleVector::pop_back() {
    // TODO: Remove and return last element, throw if empty
    if (empty()) {
        throw std::out_of_range("Vector is empty");
	}
    size--;
    return data[size];
}

// StringUtils implementations

std::string StringUtils::reverse(const std::string& str) {
    // TODO: Reverse the string
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

bool StringUtils::isPalindrome(const std::string& str) {
    // TODO: Check if palindrome (normalize input)
	std::string normal;
    for(char c : str) {
        if (isalnum(c)) {
            normal += tolower(c);
        }
    }
    std::string reversedStr = reverse(normal);
	return normal == reversedStr;
}

int StringUtils::countWords(const std::string& str) {
    std::istringstream iss(str);
    std::string word;
    int count = 0;

    while (iss >> word) {
        ++count;
    }

    return count;
}


std::string StringUtils::toUpperCase(const std::string& str) {
    // TODO: Convert to Uppercase
	std::string upperStr = str;
    for(char& c : upperStr) {
        c = toupper(c);
	}
	return upperStr;
}


std::string StringUtils::toLowerCase(const std::string& str) {
    // TODO: Convert to lowercase
	std::string lowerStr = str;
    for(char& c : lowerStr) {
        c = tolower(c);
	}
	return lowerStr;
}