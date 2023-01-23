#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

ll n, d;

vector<ll> points;
vector<ll> distances[100001];
vector<ll> max_dst;

int main () {
    cin >> n >> d;

    for(ll i = 0; i < n; i++) {
        ll pom;
        cin >> pom;
        points.push_back(pom);

        max_dst.push_back(0);
        for (ll j = i-1; j >= 0; j--) {
            ll dst = pom - points[j];
            if (dst <= d && max_dst[j] <= dst) max_dst[j] = j;
        }

        // else {
        //     for(ll j = 0; j <= i; j++) {
        //         distances[j].push_back(pom - points[j]);
        //     }
        // }
    }

    ll ret = 0;

    for (ll j = 0; j < n-1; j++) {
        if (max_dst[j] >= max_dst[j+1]) {
            ret += 
        }
    }

    cout << ret << endl;

    return 0;
}