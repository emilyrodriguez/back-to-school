// Emily Rodriguez
// Assignment #11
// April 8, 2018

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num[10], largest = 0, smallest = 0, temp = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Please enter a number: ";
        cin >> num[i];
    }
    smallest = num[0];
    largest = num[0];
    for (int i = 1; i < 10; i++) {
        temp = num[i];
        if (temp < smallest) {
            smallest = temp;
        }
        if (temp > largest) {
            largest = temp;
        }
    }
    
    cout << "Largest number in array: " << largest << endl;
    cout << "Smallest number in array: " << smallest << endl;
    system("PAUSE");
    return 0;
}
