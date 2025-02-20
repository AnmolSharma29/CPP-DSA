#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(float value) {
        real = value;
        imag = value;
    }
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;      
    Complex c2(5);    
    Complex c3(3, 4); 
    
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Complex number 3: ";
    c3.display();

    Complex result = c2.add(c3);
    cout << "Sum of complex number 2 and 3: ";
    result.display();
}



























