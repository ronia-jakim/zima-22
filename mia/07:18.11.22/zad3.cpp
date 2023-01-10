#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

ll n, a, b, k;
vector<int> signs;

ll xd = pow(10, 9) + 9;

ll pow (ll x, ll y);

int main() {
    cin >> n >> a >> b >> k;

    for (ll i = 0; i < k; i++) {
        char pom;
        cin >> pom;
        if (pom == '+') signs.push_back(1);
        else signs.push_back(-1);
    }

    ll period = 0;

    for (ll i = 0; i < k; i++) {
        period += signs[i] * pow(a, n-i) * pow(b, i);
    }

    ll r = n % k;

    ll d = n - r;
    d /= k;

    ll sum = 0;

    for (ll i = 0; i < d; i++) {
        ll ma = 1 / pow(a, i*k);
        ll mb = pow(b, i*k);

        sum += ma * mb * period;

        //sum %= xd;
    }

    for(ll i = n-1; i >= n-r; i--) {
        sum += signs[i] * pow(a, n-i) * pow(b, i);
        //sum %= xd;
    }

    if (n < k) {
        sum = period % xd;
    }
    else {
        sum %= xd;
    }

    if (sum < 0) sum = xd + sum;

    cout << sum << endl;

    return 0;
}

ll pow (ll x, ll y) { // x^y
    if (y == 0) return 1;
    if (y == 1) return x;

    if (y % 2 == 1) return x * pow(x, y-1);
    return pow(x, y/2) * pow(x, y/2);
}