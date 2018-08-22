//  Emily A Rodriguez
//  2/24/18
//  grade.cpp
//  lab03b
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double incorrectQuestions1, incorrectQuestions2, incorrectQuestions3, totalQuestion1, totalQuestion2, totalQuestion3, testScore1, testScore2, testScore3, testAverage;
    
    cout << "Test 1: Input the total number of incorrect answers followed by the total number of questions seperated by a space. ";
    cin >> incorrectQuestions1 >> totalQuestion1;
    cout << "Test 2: Input the total number of incorrect answers followed by the total number of questions seperated by a space. ";
    cin >> incorrectQuestions2 >> totalQuestion2;
    cout << "Test 3: Input the total number of incorrect answers followed by the total number of questions seperated by a space. ";
    cin >> incorrectQuestions3 >> totalQuestion3;
    testScore1 = (totalQuestion1 - incorrectQuestions1);
    testScore1 = (testScore1 / totalQuestion1) * 100;
    testScore2 = (totalQuestion2 - incorrectQuestions2);
    testScore2 = (testScore2 / totalQuestion2) * 100;
    testScore3 = (totalQuestion3 - incorrectQuestions3);
    testScore3 = (testScore3 / totalQuestion3) * 100;
    testAverage = (testScore1 + testScore2 + testScore3) / 3;
    cout << "Test Score 1: " << testScore1 << endl;
    cout << "Test Score 2: " << testScore2 << endl;
    cout << "Test Score 3: " << testScore3 << endl;
    cout << setprecision(2) << fixed;
    cout << "Average: " << testAverage << endl;
    system("PAUSE");
    return 0;
}
