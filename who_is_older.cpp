#include <iostream>
#include <string_view>
#include <string>

std::string getName() {
    std::cout << "Enter your name: ";
    std::string name {};
    std::cin >> name;

    return name;
}

int getAge() {
    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;

    return age;
}


void displayOlder(std::string_view name1, int age1, std::string_view name2, int age2) {
    std::cout << ((age1 > age2) ? name1 : name2) << " is older." << std::endl;
}


int main() {
    std::string_view name1 {getName()};
    int age1 {getAge()};
    std::string_view name2 {getName()};
    int age2 {getAge()};

    displayOlder(name1, age1, name2, age2);
    return 0;
}