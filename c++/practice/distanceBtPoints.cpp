#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int a, b;
    friend void distance(point v1, point v2);

public:
    void setpoint(int x, int y)
    {
        a = x;
        b = y;
    }
    void displaypoint()
    {
        cout << "the point is (" << a << "," << b << ")" << endl;
    }
};
void distance(point v1, point v2)
{
    float d;
    d = sqrt((v2.a - v1.a) * (v2.a - v1.a) + (v2.b - v1.b) * (v2.b - v1.b));
    cout << "distance between two points is " << d << endl;
}
int main()
{
    point p1, p2;
    p1.setpoint(1, 1);
    p1.displaypoint();
    p2.setpoint(1, 1);
    p2.displaypoint();
    distance(p1, p2);

    return 0;
}