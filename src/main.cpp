#include <iostream>
#include "operations.h"

int main() {
    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    try {
        switch (operation) {
        case '+':
            std::cout << "Result: " << add(num1, num2) << "\n";
            break;
        case '-':
            std::cout << "Result: " << subtract(num1, num2) << "\n";
            break;
        case '*':
            std::cout << "Result: " << multiply(num1, num2) << "\n";
            break;
        case '/':
            std::cout << "Result: " << divide(num1, num2) << "\n";
            break;
        default:
            std::cout << "Invalid operator.\n";
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
