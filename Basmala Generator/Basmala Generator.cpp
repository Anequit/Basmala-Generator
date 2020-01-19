#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("BasmalaOutput.txt"); // file name

    if (!file) { // Check to see if the file failed to be opened
        cout << "Failed to create file. You may already have a file named BasmalaOutput";
        return 1;
    }

    else {
        int amount;

        cout << "How many Basmala Characters would you like generated? ";
        cin >> amount;

        for (int x = 1; x <= amount; x++) {
            file << u8"\uFDFD";
        }
        file.close();

        system("BasmalaOutput.txt");
        return 0;
    }
}