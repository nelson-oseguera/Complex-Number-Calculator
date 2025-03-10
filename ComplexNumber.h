#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructors
    ComplexNumber();
    ComplexNumber(double real, double imaginary);

    // Setters and Getters
    void setReal(double real);
    void setImaginary(double imaginary);
    double getReal() const;
    double getImaginary() const;

    // Display function
    void display() const;

    // Overloaded operators
    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator-(const ComplexNumber& other) const;
    ComplexNumber operator*(const ComplexNumber& other) const;
    ComplexNumber operator/(const ComplexNumber& other) const;

    // Assignment operator
    ComplexNumber& operator=(const ComplexNumber& other);
};

#endif // COMPLEXNUMBER_H
