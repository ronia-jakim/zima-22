#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

#define ll long long int

int main () {
    ll k, p;

    cin >> k >> p;

    ll ret = 0;

    for (ll i = 1; i <= k; i++) {
        string f = to_string(i);
        string e = f;

        reverse(e.begin(), e.end());
        ll now = stoll(f.append(e));

        ret += now;
    }

    cout << ret % p << endl;

    return 0;
}