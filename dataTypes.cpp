/*
    In this tutorial we will learn about the fundamental Data Types
    in the C++ Programming Language. Like any other programming
    Language C++ too has its fundamental data types, which are
    integrated together to form a complex one. There 4 primitive/
    basic/fundamental Data Types in C++, They are:
        1. Char     (Character Types)
        2. Int      (Integral Types)
        3. Float    (Floating Point Number)
        4. Bool     (Boolean Types)

    Each types are discussed in detail below.
*/
#include <iostream> // Includes standard input/output stream

// Main Function
int main()
{
    /*
       1. Char (Character Data Type)
           In C++ a character data type has size of one byte or 8 bits.
           It can store values from 0-255 for unsigned (non-negative numbers)
           and -128 to 127 for signed ( both positive and negative included)
           numbers. To use a character data type we enclose the character we
           want to use in a single quote:
               Example:
                   1   char myChar {'P'}; (Recommended)  list value initialization
                   2   char myChar2 = 'R';    // value initialization
                   3   char myChar3 = {'A'};  // Default value initialization

           For now, just rember each line of the above example is correct in case
           of initializing character data type. C++ compiler utilizes ASCII table to represent
           characters in C++. Each character is represented with s decimal nuber between 0-255
           we can see the numerical value of the characture by casting the character into
           int type.
               Example;
                   1   std::cout << (int)(myChar) << std::endl;

    */

    return 0; // Success Code
}
