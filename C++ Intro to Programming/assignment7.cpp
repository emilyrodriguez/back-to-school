// Emily Rodriguez
// Assignment #7
// March 11, 2018

#include <iostream>
#include <string>
using namespace std;

int main() {
    int students = 0;
    string studentName;
    string frontLine;
    string backLine;
    
    cout << "How many students are in this class? ";
    cin >> students;
    
    while (students < 1 || students > 25) {
        cout << "Invalid entry. Please enter a number between 1 and 25. ";
        cin >> students;
    }
    
    for (int i = 1; i <= students; i++) {
        cout << "Enter name of student #" << i << ": ";
        cin >> studentName;
        
        if (i == 1) {
            frontLine = studentName;
            backLine = studentName;
        } else {
            if (studentName < frontLine)
                frontLine = studentName;
            else if (studentName > backLine)
                backLine = studentName;
        }
    }
    cout << "First in line is: " << frontLine << endl;
    cout << "Last in line is: " << backLine << endl;
    
    system("PAUSE");
    return 0;
}
