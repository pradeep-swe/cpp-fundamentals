#include <iostream>
#include "constants.h"

/*
Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % 
(remainder). Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. If an invalid 
operator is passed into the function, the function should print an error message. For the division operator, do an integer division, and don’t 
worry about divide by zero.
*/


// Namespace to maintain math methods
namespace math {
    // Adds two numbers
    int add(int a, int b) {
        return (a+b);
    }

    // Subtract two numbers
    int diff(int a, int b) {
        return (a-b);
    }

    // Multiply two numbers
    int product(int a, int b) {
        return (a*b);
    }

    // Divide two numbers
    int divide(int a, int b) {
        return (a/b);
    }

    // Return the remainder when a divide b
    int modulo(int a, int b) {
        return (a%b);
    }
}

// Get the user preferred number
int getNum() {
    // Persistant static variable to check for multiple calls
    static int s_count {0};

    if (s_count == 0)
        std::cout << "Enter a number: ";
    else
        std::cout << "Enter another number: ";

    int num {};
    std::cin >> num;
    s_count++;

    return num;
}

// Get the operator from the user
char getOperator() {
    std::cout << "Enter the operator: ";
    char op{};
    std::cin >> op;

    return op;
}

// Decide which operation to be performed based on user's want
int  getOperation(int num1, char op, int num2) {
    switch (op) {
        case '+':
            return math::add(num1, num2);  // funcCall to add()
        case '-':
            return math::diff(num1, num2); // funcCall to diff()
        case '*':
            return math::product(num1, num2); // funcCall to product()
        case '/':
            return math::divide(num1, num2); // funcCall to divide()
        case '%':
            return math::modulo(num1, num2); // funcCall to modulo()
        default:
            std::cout << "Invalid operator, Please choose operafor among (+, -, *, /, %): ";
            return 0;
    }
}

int main() {
    // Ask user for input
    int num1 {getNum()}; 
    int num2 {getNum()};
    char op {getOperator()};

    // funcCall to perform an arithmetic operation
    int result = getOperation(num1, op, num2);

    // Print the output to the standard output stream
    std::cout << "Result: " << result << std::endl;
}


