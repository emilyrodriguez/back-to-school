//  Emily A Rodriguez
//  4/1/18
//  lastfirst.cpp
//  lab06

#include <iostream>
using namespace std;

int main() {
    int number[10];
    int i;
    
    for(i=0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> number[i];
    }
    for (i = 9; i >= 0; i--) {
        cout << number[i] << endl;
    }
    
    system("PAUSE");
    return 0;
}
