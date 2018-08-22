//  Emily A Rodriguez
//  4/1/18
//  gcount.cpp
//  lab06

#include <iostream>
using namespace std;

void counter(int *gradeCount, int index) {
    int temp = 0;
    temp = gradeCount[index];
    temp += 1;
    gradeCount[index] = temp;
}

int main() {
    int const QUIT = -1;
    char gradeLetter[5] = {'F','D','C','B','A'};
    int gradeCount[5] = { 0, 0, 0, 0, 0 };
    int grade;
    
    cout << "Grading system: A = 4, B = 3, C = 2, D = 1, F = 0" << endl;
    cout << "Input grade or enter -1 to exit: ";
    cin >> grade;
    
    while(grade != QUIT) {
        switch(grade) {
            case 0:
                counter(gradeCount, 0);
                break;
            case 1:
                counter(gradeCount, 1);
                break;
            case 2:
                counter(gradeCount, 2);
                break;
            case 3:
                counter(gradeCount, 3);
                break;
            case 4:
                counter(gradeCount, 4);
                break;
            default:
                cout << "Invalid Entry";
                break;
        }
        
        if (grade != QUIT) {
            cout << "Grading system: A = 4, B = 3, C = 2, D = 1, F = 0" << endl;
            cout << "Input grade or enter -1 to exit: ";
            cin >> grade;
        }
    }
    
    for (int i = 0; i <= 4; i++){
        cout << "Grade " << gradeLetter[i] << ": " << gradeCount[i] << endl;
    }
    
    system("PAUSE");
    return 0;
}
