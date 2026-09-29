#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    friend Complex add(Complex c1, Complex c2);

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

Complex add(Complex c1, Complex c2)
{
    Complex result(
        c1.real + c2.real,
        c1.imaginary + c2.imaginary
    );

    return result;
}

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 2);

    Complex c3 = add(c1, c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}