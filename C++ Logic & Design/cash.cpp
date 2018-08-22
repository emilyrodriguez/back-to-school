//  Emily A Rodriguez
//  3/25/18
//  cash.cpp
//  lab05b

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double const TAX_RATE = .08;
    double price = 0.0, sum = 0.0, total;
    
    cout << "Enter the item price (or 0 to exit): $";
    cin >> price;
    
    while (price != 0) {
       sum = sum + price;
       cout << "Enter the item price (or 0 to exit): $";
       cin >> price;
    }
    
    total = (sum * TAX_RATE) + sum;
    cout << setprecision(2) << fixed;
    cout << "Total before tax: $" << sum << endl;
    cout << "Total after tax: $" << total << endl;
    system("PAUSE");
    return 0;
}
