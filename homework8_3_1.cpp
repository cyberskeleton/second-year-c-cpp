#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    unsigned birth_year;
public:
    int input() {
        cout << "input name: ";
        cin >> name;
        cout << "input birth year: ";
        cin >> birth_year;
    }

    string get_name() {
        return name;
    }

    void print() {
        cout << name << ", " << birth_year << endl;
    }
};

class M8 : public Person {
private:
    string phone_number;
public:
    M8() {
        name = "";
        birth_year = 1;
        phone_number = "";
    };

    M8(string m8_name, unsigned m8_birth_year, string m8_phone_number) {
        name = m8_name;
        birth_year = m8_birth_year;
        phone_number = m8_phone_number;
    };

    string get_phone_number() {
        return phone_number;
    }

    int input() {
        Person::input();
        cout << "input phone: ";
        cin >> phone_number;
    }

    void print() {
        cout << name << " " << phone_number << endl;
    }
};

class PhoneBook {
private:
    vector<string> book;
public:
    vector<string> get_book() {
        return book;
    }

    void set_book(vector<string> new_book) {
        book = new_book;
    }

    string add_book_record(M8 mate) {
        string record = mate.get_name() + " " + mate.get_phone_number();
        book.push_back(record);
        return record;
    }

    vector <string> read_file(const string &fileName) {
        string line;
        vector <string> read_file;
        ifstream data(fileName);
        while (getline(data, line)) {
            stringstream lineStream(line);
            string cell;
            getline(lineStream, cell, ',');
            read_file.push_back(cell);
        }
        return read_file;
    }

    string find_by_name(vector<string> data, string name) {
        string result = "number not found";
        for (string str : data) {
            string::size_type pos = str.find(name);
            if (pos != string::npos) {
                result = str.substr(pos + name.size());
            }
        }
        return result;
    }

    void write_file(const string& fileName) {
        string line;
        vector<string> write_file;
        ofstream os;
        os.open(fileName);
        for (string str : book) {
            os << str << endl;
        }
    }

    void replace_number(string name, string new_num) {
        string substring;
        for (int i = 0; i < book.size(); ++i) {
            string str = book[i];
            string::size_type pos = str.find(name);
            if (pos != string::npos) {
                substring = str.substr(pos + name.size());
                book[i].replace(pos + name.size() + 1, substring.size(), new_num);
                break;
            }
        }
    }
};

int main() {
    PhoneBook book;
    M8 boss = M8("Hugo", 1901, "0987654321");
    M8 bosses_wife = M8("Donna", 1902, "098887855");
    book.add_book_record(boss);
    book.add_book_record(bosses_wife);

    M8 coworker;
    coworker.input();
    coworker.print();
    string filename = "phone_book.txt";
    book.add_book_record(coworker);
    book.write_file(filename);
    vector<string> str = book.read_file(filename);
    cout << "name to find number: ";
    string name;
    cin >> name;
    cout << book.find_by_name(str, name) << endl;
    cout << "name to rewrite number: ";
    string name2;
    cin >> name2;
    book.replace_number(name2,"0999999");
    for (string line : book.get_book()) cout << line << endl;
    book.write_file(filename);
}
