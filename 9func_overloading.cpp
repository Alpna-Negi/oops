/*Q9.Construct a Program in C++ to show the working of function overloading (compile time polymorphism) 
by using a function named calculate Area () to calculate area of square, rectangle and
triangle using different signatures as required.*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Overload {
public:
    float area(float);
    float area(float, float);
    float area(float, float, float);
};

float Overload::area(float n) {
    return n * n;
}

float Overload::area(float n, float m) {
    return n * m;
}

float Overload::area(float n, float m, float p) {
    float s = (m + n + p) / 2;
    return sqrt(s * (s - m) * (s - n) * (s - p));
}

int main() {
    Overload ob;
    float s, l, h, a, b, c;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Enter sides of rectangle: ";
    cin >> l >> h;
    cout << "Enter sides of triangle: ";
    cin >> a >> b >> c;

    cout << endl << "Area of square is: " << ob.area(s) << endl;
    cout << "Area of rectangle is: " << ob.area(l, h) << endl;
    cout << "Area of triangle is: " << setprecision(4) << ob.area(a, b, c) << endl;

    return 0;
}
