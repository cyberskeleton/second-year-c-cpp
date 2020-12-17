#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream file1;
    file1.open ("hw7_1_20.txt", ios::in);
    string str1;
    char character;
    cout << "input character: ";
    cin >> character;
    while (file1 >> str1) {
            if (str1[0] == character) {
                cout << str1 << endl;
            }
        }
    file1.close();
}
