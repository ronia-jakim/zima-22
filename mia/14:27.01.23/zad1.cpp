#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;

vector<int> x;
vector<int> y;

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int pomx, pomy;
        cin >> pomx >> pomy;
        x.push_back(pomx);
        y.push_back(pomy);
    }

    if (n == 1) {
        cout << -1 << endl;
        return 0;
    }

    if (n == 2) {
        // jezeli dostalismy tylko wierzcholki na jednym boku, to nie znamy drugiego wymiaru
        if (x[0] == x[1] || y[0] == y[1]) {
            cout << -1 << endl;
            return 0;
        }
        
        int a = abs(x[0] - x[1]);
        int b = abs(y[0] - y[1]);

        cout << a * b << endl;
        return 0;
    }

    int a = max(abs(x[0] - x[1]), abs(x[0] - x[2]));
    int b = max(abs(y[0] - y[1]), abs(y[0] - y[2]));

    cout << a * b << endl;

    return 0;
}