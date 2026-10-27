
#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    void operator-()
    {
        feet--;
        inch--;
    }
};

int main()
{
    Distance d1(8, 9);

    -d1;

    cout << "\nFeet & Inches (Decrement): "
         << d1.feet << "'" << d1.inch;

    return 0;
};