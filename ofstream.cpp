#include <fstream>

using namespace std;

int main() {
    ofstream myFile;

    myFile.open("data.txt");
    myFile << "Aku Cinta C++";

    myFile.close();

    return 0;
}