// Emily Rodriguez
// Assignment # 3
// Jan. 27, 2018

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int tankSize, fullMiles, MPG;
    // get tank size
    cout << "Enter car's gas tank size in gallons: ";
    cin >> tankSize;
    // get miles car can drive on full
    cout << "Enter total miles car can drive on full tank: ";
    cin >> fullMiles;
    // Divide tankSize by fullMiles to get MPG
    MPG = fullMiles/tankSize;
    // display MPG
    cout << "The total miles per gallon is: " << MPG << endl;
    system("PAUSE");
    return 0;
}
