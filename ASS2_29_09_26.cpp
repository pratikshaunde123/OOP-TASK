#include <iostream>
using namespace std;

class Number
{
private:
    int a;
    int b;

public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    friend int findMax(Number n);
};

int findMax(Number n)
{
    if (n.a > n.b)
        return n.a;
    else
        return n.b;
}

int main()
{
    Number n(25, 40);

    cout << "Larger Number = " << findMax(n) << endl;

    return 0;
}