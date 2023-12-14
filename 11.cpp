#include <iostream>
using namespace std;
class ComplexNumber {
private:
    double real;
    double imag;

public:
    // Constructor with no arguments
    ComplexNumber() : real(0.0), imag(0.0) {}
    ComplexNumber(double value) : real(value), imag(value) {}
    ComplexNumber(double realPart, double imagPart) : real(realPart), imag(imagPart) {}

    // Function to add two complex numbers
    ComplexNumber add(const ComplexNumber& other) {
        ComplexNumber result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" <<endl;
    }
};

int main() {
    // Create complex numbers using different constructors
    ComplexNumber num1;               // Initializes to 0 + 0i
    ComplexNumber num2(5.0);          // Initializes to 5 + 5i
    ComplexNumber num3(2.0, 3.0);     // Initializes to 2 + 3i

    // Perform addition
    ComplexNumber sum = num2.add(num3);

    // Display the results
    cout << "Number 1: ";
    num1.display();
    cout << "Number 2: ";
    num2.display();
    cout << "Number 3: ";
    num3.display();
    cout << "Sum of Number 2 and Number 3: ";
    sum.display();

    return 0;
}