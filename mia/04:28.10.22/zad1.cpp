#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

ll ide (ll dead, ll n, ll now);
vector<ll> b;
ll dead = 0;

int main () {
    ll n, q;
    cin >> n >> q;

    vector<ll> a;

    for (ll i = 0; i < n; i++) {
        ll pom;
        cin >> pom;
        a.push_back(pom);
        b.push_back(pom);
        if (i > 0) b[i] += b[i-1];
    }

    vector<ll> k;

    for (ll i = 0; i < q; i++) {
        ll pom;
        cin >> pom;
        k.push_back(pom);
    }

    ll pom = 0;

    for (ll i = 0; i < q; i++) {
        cout << "wchodze z: " << dead << " " << pom << " " << k[i] << endl;

        if (pom > k[i]) {
            pom -= k[i];
        }
        else if (pom == k[i]) {
            pom = 0;
            dead++;
        }
        else {
            k[i] -= pom;
            pom = 0;
            ll r = ide(dead, n-1, k[i]);
            cout << "$" << r << endl;

            if (b[r] > k[i]) {
                dead = r - 1;
                pom = a[r] - (k[i] - b[r-1]);
            }
            else if (b[r] == k[i]) {
                dead = r + 1;
            }
            else {
                dead = r;
                pom = a[r+1] - (k[i] - b[r]);
            }
        }

        if (dead >= n) dead = 0;

        cout << n - dead << endl;
    }
}

ll ide (ll st, ll end, ll k) {
    ll mid = (st+end) / 2;
    if(end - st <= 1) return mid;

    if (b[mid] - b[dead] > k) return ide(st, mid, k);
    else return ide(mid, end, k);
}