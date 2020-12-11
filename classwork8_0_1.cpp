#include <iostream>
using namespace std;

class Ratio {
private:
    int nominator;
    unsigned denominator;
public:
    Ratio() {};

    Ratio(int n, unsigned d) {
        nominator = n;
        denominator = d;
    }

    void show() {
        cout << nominator << "/" << denominator;
    }

    void set(int n, unsigned d) {
        nominator = n;
        denominator = d;
    }

    void input() {
        cout << "input nominator: ";
        cin >> nominator;
        cout << "input denominator: ";
        cin >> denominator;
    }

    Ratio add(Ratio &x) {
        Ratio a;
        a.nominator = (nominator * x.denominator) + (denominator * x.nominator);
        a.denominator = denominator * x.denominator;
        a.reduce(&a);
        return a;
    }

    Ratio mult(Ratio &x) {
        Ratio a;
        a.nominator = nominator * x.nominator;
        a.denominator = denominator * x.denominator;
        a.reduce(&a);
        return a;
    }

    int set_nom(int x) {
        nominator = x;
        return 0;
    }

    int set_denom(unsigned x) {
        if (x != 0) {
            denominator = x;
            return 0;
        }
        return 1;
    }

    static int GCD(long long x, long long y) {
        if (x > y) {
            if (y == 0) return x;
            return GCD(y, x % y);
        }
        if (x == 0) return x;
        return GCD(x % y, x);
    }

private:
    void reduce(Ratio *x) {
        for (int i = x->denominator * x->nominator; i > 1; i--) {
            if ((x->denominator % i == 0) && (x->nominator % i == 0)) {
                x->denominator /= i;
                x->nominator /= i;
            }
        }
    }
};


int main() {
    Ratio ratio1, ratio2(1, 6), ratio3, ratio4;
    ratio1.input();
    ratio1.show();
    cout << " + ";
    ratio2.show();
    ratio3 = ratio1.add(ratio2);
    cout << " = ";
    ratio3.show();
    cout << endl;
    ratio4 = ratio1.mult(ratio2);
    ratio1.show();
    cout << " * ";
    ratio2.show();
    cout << " = ";
    ratio4.show();
    cout << endl;
}
