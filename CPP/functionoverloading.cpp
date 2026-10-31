#include <iostream>
using namespace std;

int area(int s) {
    return s * s;
}

int area(int l, int b) {
    return l * b;
}

float area(float r) {
    return 3.14 * r * r;
}

int main() {
    int s, l, b;
    float r;

    cout << "Enter side of square: ";
    cin >> s;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Area of Square: " << area(s) << endl;
    cout << "Area of Rectangle: " << area(l, b) << endl;
    cout << "Area of Circle: " << area(r) << endl;

    return 0;
}