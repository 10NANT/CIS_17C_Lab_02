# Lab 02 - Arrays and Strings

This lab introduces fundamental data structures and algorithms for dynamic arrays and string manipulation in C++.

## Files in this Directory
- `google_test/`: Directory containing Google Test files
- Implementation files: `*.cpp` with TODO comments for student completion
- Documentation: `*.md` files with requirements, diagrams, and presentations
- `arrays_strings.cpp`: Template with class declarations and TODO comments for implementation
- `arrays_strings_test.cpp`: Comprehensive Google Test suite with 10 test cases
- `design_diagrams.md`: Class diagrams and algorithm flowcharts
- `presentation.md`: Lecture notes on arrays and strings
- `requirements_document.md`: Detailed requirements and specifications

## Learning Objectives
- Implement a custom dynamic array class with resizing
- Understand amortized time complexity
- Practice string manipulation algorithms
- Write comprehensive unit tests
- Handle edge cases in data structures

## System Components

### SimpleVector Class
A basic dynamic array implementation with:
- **push_back()**: Adds elements with automatic resizing
- **operator[]**: Direct element access
- **getSize()**: Returns current element count
- **empty()**: Checks for empty array
- **clear()**: Resets size without deallocating
- **pop_back()**: Removes and returns last element

### StringUtils Class (Static)
Utility functions for string processing:
- **reverse()**: Reverses character order
- **isPalindrome()**: Checks palindrome property (case-insensitive, ignores punctuation)
- **countWords()**: Counts space-separated words
- **toUpperCase()**: Converts to uppercase
- **toLowerCase()**: Converts to lowercase

## Implementation Instructions

## Testing Your Implementation

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods in the `.cpp` file, follow these steps to test your code:

### Step 1: Navigate to the root directory
```bash
cd ..
```

### Step 2: Build with CMake
```bash
mkdir build
cd build
cmake ..
make arrays_strings_test
```

### Step 3: Run the tests
```bash
g++ *_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o test_executable
```

### Step 3: Run the tests
```bash
./test_executable
```

### Expected Output
You should see output like:
```
[==========] Running X tests from Y test suite.
...
[  PASSED  ] X tests.
```

If all tests pass, your implementation is correct! If tests fail, check your code against the TODO requirements and test expectations.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented with correct signatures.
- **Test failures**: Review the failing test messages and debug your implementation.
- **Missing dependencies**: Make sure Google Test is installed as described in the prerequisites.

The `arrays_strings.cpp` file contains the class declarations with empty method bodies and detailed TODO comments. Your task is to:
1. Read the TODO comments carefully
2. Implement each method according to the specifications
3. Test your implementation using the provided Google Test suite
4. Ensure all tests pass before submission

### Tips:
- Start with SimpleVector constructor and destructor
- Implement push_back with dynamic resizing logic
- Test vector operations before moving to strings
- Use std::string methods and algorithms where appropriate
- Handle edge cases like empty vectors/strings

## Google Test Setup and Usage

### Prerequisites
- C++ compiler with C++17 support
- Google Test framework installed

#### Installing Google Test on macOS:
```bash
# Install Homebrew if needed
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install required tools
brew install cmake
brew install googletest
```

#### Installing Google Test on Windows:
1. Download CMake from https://cmake.org/download/
2. Clone and build Google Test:
   ```
   git clone https://github.com/google/googletest.git
   cd googletest
   mkdir build && cd build
   cmake -DCMAKE_INSTALL_PREFIX=C:\googletest ..
   cmake --build . --config Release
   cmake --build . --config Release --target install
   ```

#### Installing Google Test on Linux:
```bash
sudo apt-get install libgtest-dev cmake
```

### Building with CMake
Navigate to this directory and run:

#### All platforms:
```bash
mkdir build
cd build
cmake ..
make
```

This will build both the test executable and the main program in the `build` directory.
