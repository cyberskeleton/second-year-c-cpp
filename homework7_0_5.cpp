#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1; //= "this is  a test  string";
    cout << "input string: ";
    getline(cin, str1);
    string str2 = "";
    int i = 0;
    int count_words = 0;
    while (i < str1.length()) {
        int count_a = 0;
        if (str1[i] != ' ') {
            str2.push_back(str1[i]);
            //cout << str2 << endl;
            for (int j = 0; j < str2.length(); j++) {
                if (str2[j] == 'a') {
                    count_a++;
                }
            }
        if (count_a == 3) {
            count_words ++;
            //cout << "counter: " << count_words << endl;
        }
    i++;
    }
    else {
        str2.clear();
        i++; }
    }
    cout << count_words << endl;
}
