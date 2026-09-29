#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s)
    {
        name = n;
        id = i;
        salary = s;

        cout << "Employee Constructor Called" << endl;
    }

    void displayEmployee()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Name   : " << name << endl;
        cout << "ID     : " << id << endl;
        cout << "Salary : " << salary << endl;
    }

    ~Employee()
    {
        cout << "Employee Destructor Called" << endl;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager(string n, int i, double s, string d): Employee(n, i, s)
    {
        department = d;

        cout << "Manager Constructor Called" << endl;
    }

    void displayManager()
    {
        displayEmployee();

        cout << "Department : " << department << endl;
    }

    ~Manager()
    {
        cout << "Manager Destructor Called" << endl;
    }
};

int main()
{
    Manager m("Pratiksha", 101, 50000, "IT");

    m.displayManager();

    return 0;
}