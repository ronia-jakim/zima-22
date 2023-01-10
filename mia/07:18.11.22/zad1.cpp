#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

ll n, x;

ll checking(ll sqrt);

int main () {
    cin >> n >> x;

    // tak naprawdę wystarczy, że sprawdzę liczby do pierwiastka z x -.-

    if (x > n * n) {
        cout << 0 << endl;
        return 0;
    }

    ll s = sqrt(x);

    //cout << "### " << s << endl;

    ll ret = 0;

    if (x <= n) ret = 2;

    if (x == 1) {
        cout << 1 << endl;
        return 0;
    }

    //cout << ret << endl;

    for (ll i = 2; i <= s; i++) {
        if (x % i == 0) {
            //cout << x / i << " &&&\n";
            if (i * i == x) ret++;
            else if (x / i <= n) {
                //cout << "GUWNO\n";
                ret += 2;
            }
        }
    }

    cout << ret << endl;

    return 0;
}