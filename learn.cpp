#include <iostream>
#include <cstdint>

double getDouble() {
    double x{};

    std::cout << "Enter a number: ";
    std::cin >> x;

    return x;
}

char getOperator() {
    char op{};

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    return op;
}

void printResult(double x, char op, double y) {
    double result{};

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

    std::cout << x << op << y << " is: " << result << std::endl;
}

int main() {
    double x{getDouble()};
    double y{getDouble()};
    char op{getOperator()};

    printResult(x, op, y);

    return 0;
}