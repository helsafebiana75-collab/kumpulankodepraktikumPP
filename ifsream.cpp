#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream myFile;
    char karakter;
    string teks;

    myFile.open("data.txt");
    while(!myFile.eof()) {
        myFile.get(karakter);
        teks += karakter;
    }

    cout << teks;
    myFile.close();

    return 0;
}