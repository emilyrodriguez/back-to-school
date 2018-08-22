//  Emily A Rodriguez
//  2/12/18
//  pay.cpp
//  lab03
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double hoursWorked, payRate, totalPay;
    
    cout << "How many hours were worked? ";
    cin >> hoursWorked;
    cout << "What is the employee's hourly pay rate? $";
    cin >> payRate;
    totalPay = hoursWorked * payRate;
    cout << "The employee's total pay is $";
    cout << totalPay << endl;
    system("PAUSE");
    return 0;
}
