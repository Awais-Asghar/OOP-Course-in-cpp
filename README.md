# OOP Course in C++ 

## Overview

Welcome to the Object-Oriented Programming (OOP) Course in C++. This course is designed to introduce you to the fundamental concepts of OOP and how to apply them using C++. This README will guide you through the course structure, the concepts covered, and provide instructions on how to set up and run the provided code examples.

## Prerequisites

Before starting this course, you should have a basic understanding of the following:
- Basic programming concepts (variables, loops, conditionals)
- Basic C++ syntax

## Course Structure

The course is divided into several modules, each focusing on different aspects of OOP in C++. The key concepts covered include:

1. **Classes and Objects**
2. **Encapsulation**
3. **Inheritance**
4. **Polymorphism**
5. **Abstraction**
6. **Constructors and Destructors**
7. **Operator Overloading**
8. **File I/O with Classes**
9. **Templates and Generic Programming**

## Code Examples

Throughout the course, various code examples will be provided to illustrate the concepts being taught. These examples are intended to be compiled and run on your local machine to enhance your understanding through practical experience.

### Example: Arrays and Pointers

Below is an example program demonstrating the use of arrays and pointers in C++. This is part of the introductory module to help you understand the basic data structures and pointer arithmetic in C++.

#### File: `1 Arrays Intro.cpp`

```cpp
#include<iostream>
using namespace std;

int main() 
{
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;
    int i;
    int offset;

    cout << "Array b printed with:\nArray subscript notation\n";
    for (i = 0; i < 4; i++) 
    {
        cout << "b[" << i << "] = " << *(b+i) << "\n";
    }

    cout << "\nPointer subscript notation\n";
    for (i = 0; i < 4; i++) 
    {
        cout << "bPtr[" << i << "] = " << *(bPtr+i) << "\n";
    }

    cout << "\nPointer/offset notation where the pointer is the array name\n";
    for (offset = 0; offset < 4; offset++) 
    {
        cout << "*(b + " << offset << ") = " << *(b + offset) << "\n";
    }

    cout << "\nPointer/offset notation\n";
    for (offset = 0; offset < 4; offset++) 
    {
        cout << "*(bPtr + " << offset << ") = " << *(bPtr + offset) << "\n";
    }

    return 0;
}
```

### Explanation

- **Array Subscript Notation**: Accessing array elements using the array name and index.
- **Pointer Subscript Notation**: Accessing array elements using a pointer to the array.
- **Pointer/Offset Notation**: Accessing array elements using pointer arithmetic.

### Compilation and Execution

To compile and run the provided example, follow these steps:

1. Save the code to a file named `1 Arrays Intro.cpp`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the file.
4. Compile the code using the following command:
   ```sh
   g++ -o arrays_intro "1 Arrays Intro.cpp"
   ```
5. Run the compiled program:
   ```sh
   ./arrays_intro
   ```

## Additional Resources

For further reading and more advanced topics, consider the following resources:
- **Books**: "The C++ Programming Language" by Bjarne Stroustrup
- **Online Courses**: Coursera, edX, Udemy
- **Documentation**: [C++ Reference](https://en.cppreference.com/w/)

## Conclusion

We hope this course provides you with a solid foundation in Object-Oriented Programming using C++. If you have any questions or need further assistance, feel free to reach out to the course instructor or teaching assistants.

Happy coding!

## License

This course material is licensed under the MIT License.
