#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

int t, n;

int gcd(int a, int b);

int main () {
    cin >> t;

    while (t) {
        t--;
        cin >> n;

        vector<int> a;
        vector<int> b;

        a.push_back(1);

        for (int i = 0; i < n; i++) {
            int pom;
            cin >> pom;
            a.push_back(pom);
        }
        a.push_back(1);

        //for (int i = 0; i < n; i++) cout << a[i] << " ";
        //cout << endl;

        if (n <= 2) {
            cout << "YES" << endl;
            continue;
        }

        int tak = 1;

        b.push_back(1);

        for (int i = 1; i <= n; i++) {
            int lcm = (a[i] * a[i-1]) / gcd(a[i], a[i-1]);
            b.push_back(lcm);
        }
        for (int i = 0; i < n; i++) {
            int g = gcd(b[i], b[i+1]);
            if (g != a[i]) {
                cout << "NO" << endl;
                tak = 0;
                break;
            }
        }

        if (tak == 1) cout << "YES" << endl;
    }
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}