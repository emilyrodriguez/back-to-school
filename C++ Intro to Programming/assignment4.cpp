// Emily Rodriguez
// Assignment # 4
// Feb. 4, 2018

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score1, score2, score3, score4, score5;
    float averageScore;
    const int testCount = 5;
    
    cout <<"Enter test score 1: ";
    cin >> score1;
    cout <<"Enter test score 2: ";
    cin >> score2;
    cout <<"Enter test score 3: ";
    cin >> score3;
    cout <<"Enter test score 4: ";
    cin >> score4;
    cout <<"Enter test score 5: ";
    cin >> score5;
    averageScore = (score1 + score2 + score3 + score4 + score5) / testCount;
    cout << setprecision(1) << fixed;
    cout << "Test average: " << averageScore << endl;
    system("PAUSE");
    return 0;
}
