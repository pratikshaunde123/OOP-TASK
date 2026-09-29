#include<iostream>
using namespace std;

class Employee
{
protected:
    char name[20];
    int emp_id;

public:
    void getEmployee()
    {
        cout << "\nEnter the Employee name: ";
        cin >> name;

        cout << "\nEnter the Employee emp_id: ";
        cin >> emp_id;
    }

    void setEmployee()
    {
        cout << "\nName of the Employee: ";
        cout << name;

        cout << "\nID of the Employee: ";
        cout << emp_id;
    }
};

class Salary
{
protected:
    int salary;
    int allowances;

public:
    void getSalary()
    {
        cout << "\nEnter the salary: ";
        cin >> salary;

        cout << "\nEnter the allowances: ";
        cin >> allowances;
    }

    void setSalary()
    {
        cout << "\nSalary: ";
        cout << salary;

        cout << "\nAllowances: ";
        cout << allowances;
    }
};

class Payroll : public Employee, public Salary
{
public:
    void display()
    {
        cout << "\n========== MENU ===========";

        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nSalary: " << salary;
        cout << "\nAllowances: " << allowances;
    }
};

int main()
{
    Payroll s;

    s.getEmployee();
    s.getSalary();

    s.display();

    return 0;
}