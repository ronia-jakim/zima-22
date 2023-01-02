#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

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

    ll sum = 0;

    for (ll t = 0; t < q; t++) {

        sum += k[t];
        if (sum >= b[n-1]) sum = 0;

        ll ret;
        ll lewy = 0;
        ll prawy = n-1;

        while (lewy < prawy) {
            ret = (lewy + prawy) / 2;
            if (b[ret] <= sum) lewy = ret + 1;
            else prawy = ret;
        }

        cout << n - lewy << endl;
    }

}