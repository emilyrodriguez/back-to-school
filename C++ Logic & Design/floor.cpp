//  Emily A Rodriguez
//  2/24/18
//  floor.cpp
//  lab03b

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // 9sqft = 1 square yard
    int const FIND_YARDS = 9;
    double width, length, pricePerSqYd, cost, squareYard;

    cout << "What is the width of the room in yards? ";
    cin >> width;
    cout << "What is the length of the room in yards? ";
    cin >> length;
    cout << "What is the price of the flooring per square yard? $";
    cin >> pricePerSqYd;
    // Multiply by 3 to turn width and length into yards
    squareYard = ((width * 3) * (length * 3)) / FIND_YARDS;
    cost = squareYard * pricePerSqYd;
    cout << setprecision(2) << fixed;
    cout << "The room is " << squareYard << " square yards and the flooring will cost $" << cost << endl;
    system("PAUSE");
    return 0;
}
