#include <iostream>
#include <math.h>

using namespace std;

class Vector
{
private:
    double x;
    double y;
    double z;

public:
    Vector() : x(0), y(0), z(0)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}

    void Show()
    {
        cout << "Parameters: " << x << ' ' << y << ' ' << z << endl;
    }

    void CalculateModule()
    {
        cout << "Vector length: " << sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    Vector vec(3, 4, 7);
    vec.Show();
    vec.CalculateModule();
}


