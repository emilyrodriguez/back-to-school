//  Emily A Rodriguez
//  3/11/18
//  tempchart.cpp
//  lab05
//

#include <iostream>
using namespace std;

int main() {
    int celsius = 0, farenheit;
  
    while (celsius <= 100)
    {
        farenheit = (((celsius*9)/5)+32);
        cout << celsius << "C " << farenheit << "F" << endl;
        celsius = celsius + 10;
    }

    system("PAUSE");
    return 0;
}
