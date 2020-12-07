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
    string str2 = "";
    while (file1 >> str1) {
        int i = 0;
        while (i < str1.length()) {
            if (str1[i] != ' ') {
                str2.push_back(str1[i]);
                i++;
            } else {
                str2.clear();
                i++;
            }
            if (str2[0] == character) {
                cout << str2 << endl;
                i++;
            }
        }
    }
    file1.close();
}
