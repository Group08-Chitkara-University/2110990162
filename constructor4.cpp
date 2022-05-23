#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;
    friend float distance(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displaypoint(void)
    {
        cout << "The x and y coordinate of a point is :"
             << "(" << x << "," << y << ")" << endl;
    }
};

float distance(point o1, point o2)
{
    int x1, x2, y1, y2;
    x1 = o1.x;
    x2 = o2.x;
    y1 = o1.y;
    y2 = o2.y;
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}
int main()
{
    point s1(5, 8);
    s1.displaypoint();

    point s2(9, 14);
    s2.displaypoint();

    float s3 = distance(s1, s2);
    cout << "The distance between two point is :" << s3 << endl;
}