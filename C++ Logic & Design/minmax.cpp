//  Emily A Rodriguez
//  2/18/18
//  minmax.cpp
//  lab04
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double min, max;
    cout << "Please enter two numbers with a space between them. ";
    cin >> min >> max;
    if (min > max)
        cout << min << " is greater and " << max << " is smaller" << endl;
    else
        cout << max << " is greater and " << min << " is smaller" << endl;
    system("PAUSE");
    return 0;
}
