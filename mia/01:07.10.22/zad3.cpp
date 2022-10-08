#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define ll long long

using namespace std;

int main () {
    ll n,m;

    cin >> n;
    cin >> m;

    map <ll, vector<ll>> A;
    map <ll, vector<ll>> B;

    for (ll i = 0; i < n; i++) {
        for (ll j = m-1; j >= 0; j--) {
            ll p;
            cin >> p;
            A[i-j].push_back(p);
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = m-1; j >= 0; j--) {
            ll p;
            cin >> p;
            B[i-j].push_back(p);
        }
    }

    for (auto & [k, v] : A) {
        vector<ll> w = B[k];
        sort(w.begin(), w.end());
        sort(v.begin(), v.end());

        for (int i = 0; i < w.size(); i++) {
            if (w[i] != v[i]){
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";

    return 0;
}