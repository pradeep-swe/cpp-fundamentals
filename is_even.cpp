/*
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. Use the remainder operator to test whether the integer parameter is even. Make sure isEven() works with both positive and negative numbers.
*/

#include <iostream>
#include <uint32_t>


// Ask user for a number
int getNum() {

    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;

    return num;
}

// Compile time function to calculate evenness of a number
constexpr bool isEven(int num) {

    return (num % 2 == 0) ? true : false; // Returns "true" if even and "false" if odd
}

// Display whether the user given number is Odd or Even
void diplayEvenness(int num) {
    bool flag {isEven(num)}; // if even '1', if odd '0'
    if (flag)
        std::cout << num << " is Even" << std::endl;
    else 
        std::cout << num << " is Odd" << std::endl;

    return 0;
}

int main() {    
    // funcCall to get number from the user
    int userNum(getNum());

    // funcCall to display Evennes of the user entered number
    displayEvenness(userNum);

    return 0;
}