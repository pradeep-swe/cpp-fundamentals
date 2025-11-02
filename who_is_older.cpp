/*
Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:
OUTPUT:
    Enter the name of person #1: Pradeep 
    Enter the age of John Bacon: 37
    Enter the name of person #2: Santosh
    Enter the age of David Jenkins: 44
    David Jenkins (age 44) is older than John Bacon (age 37).
*/

#include <iostream>
#include <string_view>
#include <string>

// Retrive the name of a person
std::string getName()
{
    std::cout << "Enter your name: "; // Ask for user name
    std::string name{};
    std::cin >> name;

    return name;
}

// Retrive the age of the person
int getAge()
{
    std::cout << "Enter your age: "; // Ask for user age
    int age{};
    std::cin >> age;

    return age;
}

// Print the older among two people based on their ages.
void displayOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    std::cout << ((age1 > age2) ? name1 : name2) << " is older." << std::endl;
}

// Entry Funciton
int main()
{

    std::string_view name1{getName()}; // Get the name of first person
    int age1{getAge()};                // Get the age of first person
    std::string_view name2{getName()}; // Get the name of first person
    int age2{getAge()};                // Get the age of first person

    displayOlder(name1, age1, name2, age2); // FuncCall to display older person
    return 0;
}

/*
=================================FURTHER OPTIMIZTION===================================
NOTE:
    1.  Since the age wont be possibly more than 255, you can modify the program to make
        use of uint8_t (unsigned int of 8 byte).
    2.  Use getline() function to retrive the full name cause std::cin breaks when it 
        finds sapces and new line character and dont forget to flush the input buffer
        if you were to ask for the age first since the new line char '\n' is strore in
        the buffer when the user hits "ENTER". 
CAUTION:
    Using uint8_t without castng will make the age use char tye instead of integer one
    which can cause the program to show undefined behavior.
    thus, use static_cast to cast it into integer type.
*/