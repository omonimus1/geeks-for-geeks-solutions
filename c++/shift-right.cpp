/* 
https://www.geeksforgeeks.org/problems/bitwise-right-shift--140107/1?page=1&sortBy=accuracy
https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/

In C/C++, left shift (<<) and right shift (>>) operators are binary bitwise operators that are
used to shift the bits either left or right of the first operand by the number of positions specified by
the second operand allowing efficient data manipulation. In this article, we will learn about the left shift and 
right shift operators.


Applications of left Shift Operators
Multiplication by Powers of Two: Left shifting a number by n positions is equivalent to multiplying it by 2^n and is much faster than normal multiplication
Efficient Calculations: Used in performance-critical applications where arithmetic operations need to be fast.
Bit Manipulation: Common in low-level programming, such as embedded systems and hardware interfacing.


Applications of Right Shift Operators
Division by Powers of Two: Right shifting a number by n positions is equivalent to dividing it by 2^n and it is very fast.
Efficient Calculations: Used in performance-critical applications for fast division operations.
Bit Manipulation: Useful in extracting specific bits from data, common in data compression and cryptography.


Important Points of Shift Operators
1. The left-shift and right-shift operators should not be used for negative numbers.
 The result of is undefined behavior if any of the operands is a negative number
2. If the number is shifted more than the size of the integer, the behavior is undefined.
*/
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << (a >> b);
    return 0;
}