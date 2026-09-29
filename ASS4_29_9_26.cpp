#include <iostream>
using namespace std;

class ClassB; 

class ClassA
{
private:
    int valueA;

public:
    ClassA(int a)
    {
        valueA = a;
    }

    void display()
    {
        cout << "ClassA value = " << valueA << endl;
    }

    friend void swapValues(ClassA &a, ClassB &b);
};

class ClassB
{
private:
    int valueB;

public:
    ClassB(int b)
    {
        valueB = b;
    }

    void display()
    {
        cout << "ClassB value = " << valueB << endl;
    }

    friend void swapValues(ClassA &a, ClassB &b);
};

void swapValues(ClassA &a, ClassB &b)
{
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main()
{
    ClassA a(10);
    ClassB b(20);

    cout << "Before Swap:" << endl;
    a.display();
    b.display();

    swapValues(a, b);

    cout << "\nAfter Swap:" << endl;
    a.display();
    b.display();

    return 0;
}