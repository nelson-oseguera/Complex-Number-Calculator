#include "complexnumber.h"
#include "complexarray.h"
#include <iostream>

int main() {
    // Create an array of ComplexNumbers
    ComplexArray complexArray;

    char operation;
    do {
        // Display menu
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add complex number to array" << std::endl;
        std::cout << "2. Perform operation on array" << std::endl;
        std::cout << "3. Display results" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> operation;

        switch (operation) {
            case '1': {
                // Add complex number to array
                double real, imaginary;
                std::cout << "Enter real number: ";
                std::cin >> real;
                std::cout << "Enter imaginary number: ";
                std::cin >> imaginary;
                complexArray.addComplexNumber(ComplexNumber(real, imaginary));
                break;
            }
            case '2': {
                // Perform operation on array
                char op;
                std::cout << "Enter operation (+, -, *, /): ";
                std::cin >> op;
                ComplexNumber result = complexArray.performOperation(op);
                std::cout << "Result: ";
                result.display();
                std::cout << std::endl;
                break;
            }
            case '3':
                // Display results
                complexArray.displayResults();
                break;
            case '4':
                // Exit
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

    } while (operation != '4');

    return 0;
}
