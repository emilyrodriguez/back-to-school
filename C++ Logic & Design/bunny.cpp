//  Emily A Rodriguez
//  3/25/18
//  bunny.cpp
//  lab05b

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//    Allow the user to input any number of rabbit weights in pounds into the program. Output the average of all rabbit weights, the largest rabbit weight, and the total number of rabbits.
    
    int totalRabbits = 0;
    double average, largestWeight = 0.0, rabbitWeight, totalWeight = 0.0;
    
    cout << "Please enter the rabbit's weight in pounds (or enter 0 to exit): ";
    cin >> rabbitWeight;
    
    while (rabbitWeight != 0) {
        totalWeight += rabbitWeight;
        if (largestWeight < rabbitWeight){
            largestWeight = rabbitWeight;
        }
        totalRabbits++;
        cout << "Please enter the rabbit's weight in pounds (or enter 0 to exit): ";
        cin >> rabbitWeight;
    }
    average = totalWeight/totalRabbits;
    cout << "Total rabbits: " << totalRabbits << endl;
    cout << "Largest rabbit weight: " << largestWeight << endl;
    cout << setprecision(2) << fixed;
    cout << "Average rabbit weight: " << average << endl;
    
    system("PAUSE");
    return 0;
}
