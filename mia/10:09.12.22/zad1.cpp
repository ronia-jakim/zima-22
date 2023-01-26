#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

ll n, d;

vector<ll> points;
ll ret = 0;
ll rght = 0;

int main () {
    cin >> n >> d;

    for(ll i = 0; i < n; i++) {
        ll pom;
        cin >> pom;
        points.push_back(pom);
    }

    rght = 0;

    for (ll i = 0; i < n-1; i++) {
        ll min = points[i];

        for (ll j = rght; j < n; j++) {
            if (points[j] - points[i] <= d) {
                rght = j;
            }
            else break;
        }

        //while (rght + 1 < n && points[rght+1] - min < d) {
        //    rght++;
        //}

        // wybieram dwa punkty z tych ktore sa miedzy [i, rght)
        if (rght > i) {
            ll pom = (rght - i);

            ret += pom * (pom - 1) / 2;
        }
    }

    cout << ret << endl;

    return 0;
}