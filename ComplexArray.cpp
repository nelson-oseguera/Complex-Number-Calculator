#include "complexarray.h"
#include <iostream>

// Function to add complex numbers to the array
void ComplexArray::addComplexNumber(const ComplexNumber& complexNumber) {
    array.push_back(complexNumber);
}

// Function to perform operations on the array
ComplexNumber ComplexArray::performOperation(char operation) const {
    ComplexNumber result;
    if (!array.empty()) {
        result = array[0];
        for (size_t i = 1; i < array.size(); ++i) {
            switch (operation) {
                case '+':
                    result = result + array[i];
                    break;
                case '-':
                    result = result - array[i];
                    break;
                case '*':
                    result = result * array[i];
                    break;
                case '/':
                    result = result / array[i];
                    break;
                default:
                    std::cerr << "Error: Invalid operation." << std::endl;
                    return ComplexNumber();
            }
        }
    } else {
        std::cerr << "Error: Array is empty." << std::endl;
    }
    return result;
}

// Function to display results
void ComplexArray::displayResults() const {
    for (const auto& complexNumber : array) {
        complexNumber.display();
        std::cout << " ";
    }
    std::cout << std::endl;
}
