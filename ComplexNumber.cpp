#include "complexnumber.h"
#include<iostream>

// Constructors
ComplexNumber::ComplexNumber() : real(0.0), imaginary(0.0) {}

ComplexNumber::ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

// Setters and Getters
void ComplexNumber::setReal(double real) { 
    this->real = real; 
}

void ComplexNumber::setImaginary(double imaginary) {
    this->imaginary = imaginary;
}

double ComplexNumber::getReal() const {
    return real;
}

double ComplexNumber::getImaginary() const {
    return imaginary; 
}

// Display function
void ComplexNumber::display() const {
    if (imaginary < 0)
        std::cerr << real << " - " << -imaginary << "i";
    else
        std::cerr << real << " + " << imaginary << "i";
}

// Overloaded operators
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imaginary + other.imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imaginary - other.imaginary);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
    return ComplexNumber((real * other.real) - (imaginary * other.imaginary), (real * other.imaginary) + (imaginary * other.real));
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const {
    double denominator = other.real * other.real + other.imaginary * other.imaginary;
    if (denominator != 0) {
        return ComplexNumber(
            (real * other.real + imaginary * other.imaginary) / denominator,
            (imaginary * other.real - real * other.imaginary) / denominator
        );
    } else {
        // Handle division by zero
        std::cerr << "Error: Division by zero." << std::endl;
        return ComplexNumber();
    }
}

// Assignment operator
ComplexNumber& ComplexNumber::operator=(const ComplexNumber& other) {
    if (this != &other) {
        real = other.real;
        imaginary = other.imaginary;
    }
    return *this;
}
