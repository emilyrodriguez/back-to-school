// Emily Rodriguez
// Assignment #12
// April 15, 2018

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int jars = 5;
    const string salsa[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int sales[jars], high, low, total = 0;
    
    for (int i = 0; i < jars; i++) {
        cout << "Input jars sold for " << salsa[i] << " salsa: ";
        cin >> sales[i];
        while(sales[i] < 0) {
            cout << "Input error, jar sales must be at least 0. Enter total jars sold:";
            cin >> sales[i];
        }
    }
    high = low = sales[0];
    for (int i = 0; i < jars; i++) {
        cout << salsa[i] << ": " << sales[i] << " jars"<< endl;
        total += sales[i];
        
        if(sales[i] > high) {
            high = sales[i];
        }
        else if (sales[i] < low){
            low = sales[i];
        }
    }
    
    cout << "Total sales: " << total << " jars" << endl;
    cout << "Highest: ";
    for (int i = 0; i < jars; i++) {
        if (sales[i] == high)
            cout << salsa[i] << " " << endl;
    }
    cout << "Lowest: ";
    for (int i = 0; i < jars; i++) {
        if (sales[i] == low)
            cout << salsa[i] << " " << endl;
    }
    system("PAUSE");
    return 0;
}
