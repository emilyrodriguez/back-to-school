//  Emily A Rodriguez
//  2/4/18
//  beangame.cpp
//  lab02b

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double height, radius, volumeOfCylinder, jellybeans;
    int numberOfJellyBeans;

    cout <<"Enter jar height: ";
    cin >> height;
    cout <<"Enter jar radius: ";
    cin >> radius;
    volumeOfCylinder = (3.14159 * height * radius * radius);
    // height 2cm, radius 1.5
    jellybeans = 3.14159 * 2 * .75 * .75;
    numberOfJellyBeans = volumeOfCylinder / jellybeans;
    cout<<"Volume of jar: " << volumeOfCylinder << endl;
    cout<<"Estimated number of jellybeans: " << numberOfJellyBeans << endl;
    system ("pause");
    return 0;

//   double height,radius, volumeOfCylinder, jellyBeans;
//    int NumberOfJellyBeans;
//    cout << " Please enter the height of the jar";
//    cin >> height;
//    cout << " Please enter the radius of the jar";
//    cin >> radius;
//    volumeOfCylinder = (3.14159 * height * radius * radius);
//    cout << "The volume of the jar is " << volumeOfCylinder << endl;
//    jellyBeans = (3.14159 * 2 * 1.5 * 1/5);
//    NumberOfJellyBeans = (volumeOfCylinder / jellyBeans);
//    cout << "The expected number of jellybeans in the jar is " << NumberOfJellyBeans << endl;
//    system ("PAUSE");
//    return 0;
}
