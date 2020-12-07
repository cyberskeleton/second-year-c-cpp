#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("text_.txt");
    string word;
    string string_of_values;
    while (file >> word) {
        cout << word << endl;
        string_of_values.append(word.length());
    }
    file.close();
    cout << string_of_values << endl;
    return 0;
}
