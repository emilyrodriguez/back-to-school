// Emily Rodriguez
// Assignment #7
// March 18, 2018

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int count = 0, total = 0;
    double number, average;

    ifstream infile;
    infile.open("Random.txt");

    if (infile) {
        while (infile >> number){
            count++;
            total += number;
        }
        infile.close();
        cout << "Total numbers in file: " << count << endl;
        cout << "Sum of all numbers in file: " << total << endl;
        average = total/count;
        cout << "Average of all numbers in file: " << average << endl;
    } else {
        cout << "Cannot open file!" << endl;
    }
    
    system("PAUSE");
    return 0;
}
