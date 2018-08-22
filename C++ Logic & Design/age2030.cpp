//  Emily A Rodriguez
//  2/12/18
//  age2030.cpp
//  lab03
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int age, currentYear, newAge, yearCount;
    int const YEAR_2030 = 2030;
    
    cout << "How old are you? ";
    cin >> age;
    cout << "What year is this? ";
    cin >> currentYear;
    yearCount = YEAR_2030 - currentYear;
    newAge = yearCount + age;
    cout << "The year 2030 is in ";
    cout << yearCount << " years." << endl;
    cout << "You will be ";
    cout << newAge << " years old!" << endl;
    system("PAUSE");
    return 0;
}
