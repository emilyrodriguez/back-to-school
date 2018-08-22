// Emily Rodriguez
// Assignment #5
// Feb. 12, 2018

#include<iostream>
using namespace std;

int main()
{
    double num1, num2;
    
    cout << "Enter two numbers with a space between them: ";
    cin >> num1 >> num2;
 
    if (num1 == num2)
        cout << num1 << " and " << num2 << " are equal!" << endl;
    else
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << "\nSmallest: " << ((num1 < num2) ? num1 : num2) << endl;
    system("PAUSE");
    return 0;
}
