//  Emily A Rodriguez
//  4/8/18
//  payroll.cpp
//  lab07

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream infile;
    ofstream outfile;
    infile.open("payroll.dat", ios::in);
    outfile.open("payrollOutput.txt", ios::out);
    
    if(!infile.is_open()) {
        cout << "Error opening file!" << endl;
        system("PAUSE");
        exit(1);
    }
    if(!outfile.is_open()) {
        cout << "Error opening file!" << endl;
        system("PAUSE");
        exit(1);
    }
    
    char name[15];
    double wage, pay, allPay = 0, hours;
    
    infile >> name >> wage >> hours;
    outfile << fixed << setprecision(2) << endl;
    while(!infile.eof()) {
        pay = wage * hours;
        outfile << name << " $" << pay << endl;
        allPay += pay;
        infile >> name >> wage >> hours;
    }
    outfile << "Total employee pay $" << allPay << endl;
    infile.close();
    outfile.close();
    system("PAUSE");
    return 0;
}
