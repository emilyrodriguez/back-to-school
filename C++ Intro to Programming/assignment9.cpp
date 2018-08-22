// Emily Rodriguez
// Assignment #9
// March 25, 2018

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double wholesaleCost, double markup);
int main() {
    double wholesaleCost = 0, markup = 0;
    
    cout << "Enter wholesale cost of the item: $";
    cin >> wholesaleCost;
    while (wholesaleCost < 0) {
        cout << "Incorrect input, wholesale cost must be positive. \nEnter wholesale cost of the item: $";
        cin >> wholesaleCost;
    }
    cout << "Enter the markup percentage of the item: ";
    cin >> markup;
    while (markup < 0) {
        cout << "Incorrect input, markup percentage must be positive. \nEnter the markup percentage of the item: ";
        cin >> markup;
    }
    
    double calculateRetail(double wholesaleCost, double markup);
    cout << fixed << setprecision(2);
    cout<<"Retail price: $" << calculateRetail(wholesaleCost, markup) << endl;
    system("PAUSE");
    return 0;
}

double calculateRetail(double wholesaleCost, double markup) {
    return (wholesaleCost * (markup/100)) + wholesaleCost;
}

