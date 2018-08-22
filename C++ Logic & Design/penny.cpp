//  Emily A Rodriguez
//  3/11/18
//  penny.cpp
//  lab05
//

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int days;
    double pennies = .01;

    cout << "How many days were worked? ";
    cin >> days;
    
    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " $" << pennies << endl;
        pennies *= 2;
    }
    
    cout << fixed << setprecision(2);
    cout << "Total: $" << pennies << endl;

    system("PAUSE");
    return 0;
}
