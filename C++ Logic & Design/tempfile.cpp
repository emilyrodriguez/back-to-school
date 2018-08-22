//  Emily A Rodriguez
//  4/8/18
//  tempfile.cpp
//  lab07

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream outfile;
    outfile.open("tempfile.txt", ios::out);
    
    if(!outfile.is_open()) {
        cout << "Error opening file!" << endl;
        system("PAUSE");
        exit(1);
    }

    double celcius = 0, farenheit;
    while (celcius <= 100) {
        farenheit = (((celcius * 9) / 5) + 32);
        outfile << "Celcius: " << celcius << " Farenheit: " << farenheit << endl;
        celcius += 10;
    }
    
    outfile.close();
    system("PAUSE");
    return 0;
}
