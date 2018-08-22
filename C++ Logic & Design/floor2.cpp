//  Emily A Rodriguez
//  2/18/18
//  floor2.cpp
//  lab04
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int response;
    double width, length, diameter, pricePerSqFt, cost, squareFeet;
    cout << "What is the shape of the room?" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cin >> response;
    
    if (response == 1) {
        cout << "What is the width of the room in feet? ";
        cin >> width;
        cout << "What is the length of the room in feet? ";
        cin >> length;
        cout << "What is the price of the flooring per square foot? $";
        cin >> pricePerSqFt;
        squareFeet = width * length;
        cost = squareFeet * pricePerSqFt;
        cout << setprecision(2) << fixed;
        cout << "The room is " << squareFeet << " sqft and the flooring will cost $" << cost << endl;
    } else if (response == 2) {
        cout << "What is the diameter of the room in feet? ";
        cin >> diameter;
        cout << "What is the price of the flooring per square foot? $";
        cin >> pricePerSqFt;
        squareFeet = 3.14159265 * pow((diameter/2),2);
        cost = squareFeet * pricePerSqFt;
        cout << setprecision(2) << fixed;
        cout << "The room is " << squareFeet << " sqft and the flooring will cost $" << cost << endl;
    } else {
        cout << "Input error. Try again." << endl;
    }
    system("PAUSE");
    return 0;
}


