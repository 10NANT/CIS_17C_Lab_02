# Design Diagrams for Arrays and Strings

## SimpleVector Class Diagram
```
SimpleVector
- data: int*
- capacity: size_t
- size: size_t
+ push_back(value: int): void
+ operator[](index: size_t): int&
+ getSize(): size_t
+ empty(): bool
+ clear(): void
+ pop_back(): int
- ~SimpleVector(): destructor
```

## StringUtils Class Diagram
```
StringUtils (static class)
+ reverse(str: string): string
+ isPalindrome(str: string): bool
+ countWords(str: string): int
+ toUpperCase(str: string): string
+ toLowerCase(str: string): string
```

## Vector Resize Flowchart
1. Check if size == capacity
2. If yes, double capacity
3. Allocate new array
4. Copy existing elements
5. Delete old array
6. Add new element

## String Reversal Algorithm
- Use std::reverse on string iterators
- Return modified string

## Palindrome Check Algorithm
1. Remove non-alphanumeric characters
2. Convert to lowercase
3. Compare with reversed version
