#include<iostream>

using namespace std;

int gcd(int n, int m) {
    if (m == 0) return n;
    else return gcd(m, n % m);
}

int lcm(int n, int m) {
    int div = gcd(n, m);

    int mx = m;
    int mn = n;

    if (n > m) {
        mn = m;
        mx = n;
    }

    mx = mx / div;
    return mn * mx;
}

int main () {
    int heheszki = lcm (331*151, 31*11*7*9*2);

    cout << heheszki << endl;

    heheszki = lcm(1, 2147483648);
    cout << heheszki << endl;
}