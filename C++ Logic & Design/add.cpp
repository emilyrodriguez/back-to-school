//  Emily A Rodriguez
//  3/25/18
//  add.cpp
//  lab05b

#include <iostream>
using namespace std;

int main() {
    //    Create a program that will output the sum of all the odd numbers between 1 and 99 inclusive.
    int sum = 0;

    for (int i = 1; i < 100; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    cout << "The sum of all numbers between 1 and 99 is: " << sum << endl;
    system("PAUSE");
    return 0;
}
