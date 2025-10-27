// A Simple C++ Calculator
// Takes two number and an operator as input
// Display the result based on user input operator  

// Including standard input.output library
#include <iostream>


double getDouble() {
    // Function to retrive number fron a user
    double x{};

    // Ask for user input
    std::cout << "Enter a number: "; 
    std::cin >> x; // Store the user input

    // return user input value;
    return x; 
}

char getOperator() {
    // Function to retrive the operator
    char op{};

    // Ask user for operator
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    // Return operator
    return op; 
}

void printResult(double x, char op, double y) {
    // Function to display the resut of calculation
    double result{};

    // Operator matching and calculation
    if (op == '+')
        result = (x + y);
    else if (op == '-')
        result = (x - y);
    else if (op == '*')
        result = (x * y);
    else if (op == '/')
        result = (x / y);
    else
        return;

    // Display result to the user
    std::cout << x << op << y << " is: " << result << std::endl;
}

int main() {
    // Get initial values
    double x{getDouble()};
    double y{getDouble()};
    char op{getOperator()};

    // Run opration and diplay result
    printResult(x, op, y);

    return 0;
}