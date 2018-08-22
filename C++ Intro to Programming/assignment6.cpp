// Emily Rodriguez
// Assignment #6
// March 4, 2018

#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    double discount, discountCost, noDiscountCost;
    double const PROGRAM_COST = 99;
    char choice;
    
    while (true) {
        cout << "Would you like to purchase this software? Y/N: ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
            break;
        cout << "How many copies of the software will you be purchasing? ";
        cin >> quantity;
        if (quantity > 0) {
            if (quantity >= 1 && quantity < 10) {
                discount = 0;
                noDiscountCost = quantity * PROGRAM_COST;
                discountCost = noDiscountCost;
            } else if (quantity >= 10 && quantity <= 19) {
                discount = .20;
                noDiscountCost = quantity * PROGRAM_COST;
                discountCost = noDiscountCost - ((quantity * PROGRAM_COST) * discount);
            } else if (quantity >= 20 && quantity <= 49) {
                discount = .30;
                noDiscountCost = quantity * PROGRAM_COST;
                discountCost = noDiscountCost - ((quantity * PROGRAM_COST) * discount);
            } else if (quantity >= 50 && quantity <= 99) {
                discount = .40;
                noDiscountCost = quantity * PROGRAM_COST;
                discountCost = noDiscountCost - ((quantity * PROGRAM_COST) * discount);
            } else {
                discount = .50;
                noDiscountCost = quantity * PROGRAM_COST;
                discountCost = noDiscountCost - ((quantity * PROGRAM_COST) * discount);
            }

            cout << "Quantity Ordered: " << quantity << endl;
            cout << fixed << setprecision(2);
            cout << "Percent Discount for this quantity: " << discount * 100 << "%"<< endl;
            cout << "Price before discount $" << noDiscountCost << endl;
            cout << "Price after Discount $" << discountCost << endl;
        } else {
            cout << "Input validation error. Please enter a number greater than 0." << endl;
            break;
        }
    }
    system("PAUSE");
    return 0;
}
