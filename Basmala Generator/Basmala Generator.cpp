#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    char filename[] = "BasmalaOutput.txt";

    remove(filename);

    ofstream file(filename);
    float amount;

    cout << "How many Basmala Characters would you like generated? ";
    cin >> amount;

    for (float x = 1; x <= amount; x++) {
        file << u8"\uFDFD";
        cout << x << "\t(" << x / amount * 100 << "%)" <<endl;
    }
    file.close();

    cout << "\nWrote " << amount << " characters to " << filename << endl;

    system(filename);
    return 0;
}