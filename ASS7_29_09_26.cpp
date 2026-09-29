#include <iostream>
#include <string>
using namespace std;

class Result;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:
    Student(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;
    }

    friend class Result;
};

class Result
{
public:
    void displayResult(Student s)
    {
        cout << "Student Name : " << s.name << endl;
        cout << "Roll Number  : " << s.rollNo << endl;
        cout << "Marks        : " << s.marks << endl;

        if (s.marks >= 40)
            cout << "Result       : PASS" << endl;
        else
            cout << "Result       : FAIL" << endl;
    }
};

int main()
{
    Student s("Pratiksha", 101, 85);

    Result r;

    r.displayResult(s);

    return 0;
}