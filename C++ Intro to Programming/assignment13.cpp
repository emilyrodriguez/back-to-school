//Emily Rodriguez
//Assignment 13
//April 15, 2018

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double x1, x2;

    cout << "Enter the values for variables a, b and c seperated by a space: ";
    cin >> a >> b >> c;

    if (a == 0.0) {
        cout << "Error: a cannot equal 0 or equation is not quadratic.\nEnter value for variable a: ";
        cin >> a;
    }

    x1 = (-b + sqrt((b*b) - 4*a*c))/(2*a);
    x2 = (-b - sqrt((b*b) - 4*a*c))/(2*a);

    cout << "x1 root: " << x1 << endl;
    cout << "x2 root: " << x2 << endl;
    system("PAUSE");
    return 0;
}
