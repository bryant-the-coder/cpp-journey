#include "iostream"
#include <string>

int main() {
    std::string name;
    std::string age;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Please enter your age: ";
    std::cin >> age;

    std::cout << "You're name is " << name << "\n";
    std::cout << "You're " << age << "\n";
}
