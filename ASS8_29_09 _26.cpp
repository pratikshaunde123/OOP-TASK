#include <iostream>
#include <string>
using namespace std;

class BankManager;

class BankAccount
{
private:
    long long accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(long long accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;
    }

    friend class BankManager;
};

class BankManager
{
public:
    void displayAccount(BankAccount &b)
    {
        cout << "\nAccount Details" << endl;
        cout << "Account Number : " << b.accountNumber << endl;
        cout << "Account Holder : " << b.accountHolder << endl;
        cout << "Balance        : " << b.balance << endl;
    }

    void deposit(BankAccount &b, double amount)
    {
        b.balance = b.balance + amount;

        cout << "\nDeposit Amount : " << amount << endl;
        cout << "Updated Balance: " << b.balance << endl;
    }

    void withdraw(BankAccount &b, double amount)
    {
        if (amount <= b.balance)
        {
            b.balance = b.balance - amount;

            cout << "\nWithdraw Amount : " << amount << endl;
            cout << "Updated Balance : " << b.balance << endl;
        }
        else
        {
            cout << "\nInsufficient Balance" << endl;
        }
    }
};

int main()
{
    BankAccount account(123456, "Pratiksha", 10000);

    BankManager manager;

    manager.displayAccount(account);

    manager.deposit(account, 5000);

    manager.withdraw(account, 3000);

    manager.displayAccount(account);

    return 0;
}