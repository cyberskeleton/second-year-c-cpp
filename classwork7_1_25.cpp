#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
        ifstream file1;
        ofstream file2;
        file1.open ("file1.txt", ios::in);
        string word;
        int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        string lettering[9] = {"one", "two", "three", "four", "five", "six", "seven",
                            "eight", "nine"};
        file2.open("file2.txt", ios::out);
        while (file1 >> word) {
            for (int i = 0; i < 9; i++) {
                if (lettering[i] == word) {
                    file2 << numbers[i];
                }
            }
        }
        file1.close();
        file2.close();
}
