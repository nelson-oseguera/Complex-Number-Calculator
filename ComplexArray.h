#ifndef COMPLEXARRAY_H
#define COMPLEXARRAY_H

#include "complexnumber.h"
#include <vector>

class ComplexArray {
private:
    std::vector<ComplexNumber> array;

public:
    // Function to add complex numbers to the array
    void addComplexNumber(const ComplexNumber& complexNumber);

    // Function to perform operations on the array
    ComplexNumber performOperation(char operation) const;

    // Function to display results
    void displayResults() const;
};

#endif // COMPLEXARRAY_H
