//  Emily A Rodriguez
//  2/4/18
//  pick3.cpp
//  lab02b
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number1, number2, number3;
    int max = 9;
    int min = 0;
    int sumItUp;

    srand(time(0));
    number1 = rand() % (max - min + 1) + min;
    number2 = rand() % (max - min + 1) + min;
    number3 = rand() % (max - min + 1) + min;
    sumItUp = number1 + number2 + number3;
    cout << "The pick three numbers are: " << number1 << ", " << number2 << ", " << number3 << endl;
    cout << "Sum it Up: " << sumItUp << endl;
    return 0;
}
