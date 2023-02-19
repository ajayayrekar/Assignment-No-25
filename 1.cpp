/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/

#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        void setComplex(float r, float i) {
            real = r;
            imag = i;
        }
        void displayComplex() {
            cout << "Complex number = " << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1;
    c1.setComplex(2.5, 3.5);
    c1.displayComplex();
    return 0;
}
