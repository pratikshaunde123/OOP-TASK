#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    friend double calculateDistance(Point p1, Point p2);
};
double calculateDistance(Point p1, Point p2)
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(2, 3);
    Point p2(5, 7);
cout << "Distance = " << calculateDistance(p1, p2)<< endl;
return 0;
}