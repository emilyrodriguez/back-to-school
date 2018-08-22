//  Emily A Rodriguez
//  3/11/18
//  sum.cpp
//  lab05
//

#include <iostream>
using namespace std;

int main() {
    int count = 0, total = 0;
    while (count <= 100) {
        total += count;
        count++;
        if (count == 100) {
            cout << total + count << endl;
        }
    }
    system("PAUSE");
    return 0;
}
