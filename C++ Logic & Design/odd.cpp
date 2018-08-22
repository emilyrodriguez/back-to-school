//  Emily A Rodriguez
//  2/18/18
//  odd.cpp
//  lab04
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num;
    cout << "Please enter a number to see if is even or odd: ";
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is an even number." << endl;
    else
        cout << num << " is an odd number." << endl;
    system("PAUSE");
    return 0;
}

