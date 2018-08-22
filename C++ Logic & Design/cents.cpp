//  Emily A Rodriguez
//  2/24/18
//  cents.cpp
//  lab03b
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int penny, nickel, dime, quarter, totalCoins;
    double centTotal;
    
    cout << "Input total number of pennies: ";
    cin >> penny;
    cout << "Input total number of nickels: ";
    cin >> nickel;
    cout << "Input total number of dimes: ";
    cin >> dime;
    cout << "Input total number of quarters: ";
    cin >> quarter;
    totalCoins = penny + nickel + dime + quarter;
    centTotal = (penny * .01) + (nickel * .05) + (dime * .1) + (quarter * .25);
    cout << "There are " << totalCoins << " coins adding up to to a total of $" << centTotal << endl;
    system("PAUSE");
    return 0;
}
