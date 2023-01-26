#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>

using namespace std;

#define ll long long

int t;

ll n,m;

vector<ll> a;
vector<ll> l; // licze ile poteg takiej mam

ll M = 60;

int main () {
    cin >> t;

    for (int i = 0; i < t; i++) {
        a.clear();
        l.clear();
        l.insert(l.end(), M, 0);

        cin >> n >> m;

        for (int j = 0; j < m; j++) {
            ll pom;
            cin >> pom;
            ll p = log2(pom);
            l[p]++;
            a.push_back(pom);
        }

        sort(l.begin(), l.end());

        ll div = 0;

        ll sum = 0;
        for (int j = 0; j < m; j++) sum += a[j];

        if (sum < n) {
            cout << -1 << endl;
            continue;
        }

        if ((sum & n) == n) {
            cout << 0 << endl;
            continue;
        }

        // for (int j = 0; j < m; j++) {
        //     if ((a[j] & n) != 0) {
        //         n -= a[j];
        //         a[j] = 0;
        //     }
        //     else {
        //         if (a[j] > n) {
        //             while ((a[j] & n) == 0) {
        //                 a[j] /= 2;
        //                 div++;
        //             }
        //             n -= a[j];
        //             a[j] = 0;
        //         }
        //         else {
        //             n -= a[j];
        //             a[j] = 0;
        //             //j = 0;
        //         }
        //     }
        // }

        for (int j = 0; j < M; j++) {
            // jezeli bit jest zapalony
            if ((n & (1LL << j)) != 0) {

            }
        }
        cout << div << endl;
    }

    return 0;
}