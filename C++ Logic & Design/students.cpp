//  Emily A Rodriguez
//  4/8/18
//  students.cpp
//  lab07

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream infile;
    ofstream outfile;
    infile.open("students.txt", ios::in);
    outfile.open("studentOutput.txt", ios::out);
    
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
    
    char firstname[15], lastname[15];
    double grade1, grade2, grade3, grade4, grade5, average = 0.0, highestAverage = 0.0;
    
    infile >> lastname >> firstname >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
    outfile << fixed << setprecision(2) << endl;
    
    while (!infile.eof()) {
        average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
        outfile << lastname << ", " << firstname << " Average: " << average << endl;
        infile >> lastname >> firstname >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
        
        if (average > highestAverage) {
            highestAverage = average;
        }
    }
    outfile << "Highest average: " << highestAverage << endl;
    infile.close();
    outfile.close();
    system("PAUSE");
    return 0;
}
