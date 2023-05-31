#include <iostream>
#include <math.h>

int main() {
    double weight, height;
    std::cout << "Enter your weight in kg: ";
    std::cin >> weight;
    std::cout << "Enter your height in m: ";
    std::cin >> height;

    double bmi = (weight / (pow(height, 2)));

    std::cout << "This is your BMI: " << bmi << "\n";

    if (bmi < 18.5) {
        std::cout << "You're severely thin\n";
    } else if (bmi > 25 and bmi < 30) {
        std::cout << "You're overweight\n";
    } else if (bmi > 30) {
        std::cout << "You're obese\n";
    } else {
        std::cout << "You're normal\n";
    }
}
