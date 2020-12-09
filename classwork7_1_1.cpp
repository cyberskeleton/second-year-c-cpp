#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cout << "input string: ";
    getline(cin, str1);
    string str2 = "";
    char c;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == ' ') {
            str2.push_back(str1[i]);
            }
        if (str1[i] == ' ' && str1[i+1] != ' ') {
            c = str1[i+1];
            continue; }
        if (str1[i+1] != c) {
            str2.push_back(str1[i+1]);
        }
    }
    cout << "new string: " << str2 << endl;
}
