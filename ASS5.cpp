#include<iostream>
using namespace std;

class Person
{
protected:
    char name[20];
    int age;

public:
    void getPerson()
    {
        cout << "\nEnter the Person name: ";
        cin >> name;

        cout << "\nEnter the Person Age: ";
        cin >> age;
    }

    void setPerson()
    {
        cout << "\nPerson Name: " << name;
        cout << "\nPerson Age: " << age;
    }
};

class Student : virtual public Person
{
protected:
    int Roll_No;

public:
    void getStudent()
    {
        cout << "\nEnter the Roll Number: ";
        cin >> Roll_No;
    }

    void setStudent()
    {
        cout << "\nRoll Number: " << Roll_No;
    }
};

class Employee :virtual public Person
{
protected:
    int Emp_ID;

public:
    void getEmployee()
    {
        cout << "\nEnter the Employee ID: ";
        cin >> Emp_ID;
    }

    void setEmployee()
    {
        cout << "\nEmployee ID: " << Emp_ID;
    }
};

class TeachingAssistant : public Employee, public Student
{
public:
    void display()
    {
        cout << "\n========== MENU ==========";

        cout << "\nPerson Name: " <<name;
        cout << "\nPerson Age: " << age;
        cout << "\nRoll Number: " << Roll_No;
        cout << "\nEmployee ID: " << Emp_ID;
    }
};

int main()
{
    TeachingAssistant TA;

    TA.getPerson();
    TA.getStudent();
    TA.getEmployee();

    TA.display();

    return 0;
}