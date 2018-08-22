//  Emily A Rodriguez
//  4/1/18
//  sort.cpp
//  lab06

#include <iostream>
using namespace std;

int main() {
    int number[10];
    int i;
    
    for(i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> number[i];
    }
    for(int j = 0; j < 10; j++) {
        for(int k = 0; k < 9; k++) {
            if (number[k] > number[k+1]) {
                int l = number[k];
                number[k] = number[k+1];
                number[k+1] = l;
            }
        }
    }
    for (i = 0; i < 10 ; i++) {
        cout << number[i] << "\t" << endl;
    }
    
    system("PAUSE");
    return 0;
}
