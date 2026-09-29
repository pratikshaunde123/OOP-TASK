#include<iostream>
using namespace std;

class Employee
{
protected:
    int emp_id;
    char name[20];

public:
    void getEmployee()
    {
        cout << "\nEnter your empID: ";
        cin >> emp_id;

        cout << "\nEnter Your Name: ";
        cin >> name;
    }

    void setEmployee()
    {
        cout << "\nEmployee emp ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
    }
};

class Developer : public Employee
{
protected:
    char JAVA[20], C[20], CPP[20];
    int expe1, expe2, expe3;

public:
    void getDeveloper()
    {
        cout << "\nEnter JAVA and experience: ";
        cin >> JAVA >> expe1;

        cout << "\nEnter C and experience: ";
        cin >> C >> expe2;

        cout << "\nEnter C++ and experience: ";
        cin >> CPP >> expe3;
    }

    void setDeveloper()
    {
        cout << "\nJAVA And Experience: ";
        cout << JAVA << " " << expe1;

        cout << "\nC And Experience: ";
        cout << C << " " << expe2;

        cout << "\nC++ And Experience: ";
        cout << CPP << " " << expe3;
    }
};

class SeniorDeveloper : public Developer
{
public:
    void display()
    {
        cout << "\n========== MENU ===========";

        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;

        cout << "\nJAVA and Experience: "
             << JAVA << " " << expe1;

        cout << "\nC and Experience: "
             << C << " " << expe2;

        cout << "\nC++ and Experience: "
             << CPP << " " << expe3;
    }
};

int main()
{
    SeniorDeveloper s;

    s.getEmployee();
    s.getDeveloper();

    s.display();

    return 0;
}