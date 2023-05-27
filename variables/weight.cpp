#include <iostream>

int main() {
    int weight;
    std::cout << "Enter your weight: ";
    std::cin >> weight;

    if (weight < 50) {
        std::cout << "GODDAMN YOU'RE VERY LIGHT WEIGH \n";
    } else if (weight > 70) {
        std::cout << "Cut some weight bro\n";
    } else {
        std::cout << "Your fit! Keep it up!\n";
    }
}
