#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

ll n, d;

vector<ll> points;
vector<ll> distances[100001];

int main () {
    cin >> n >> d;

    for(ll i = 0; i < n; i++) {
        ll pom;
        cin >> pom;
        points.push_back(pom);
        //if (i>0) points[i] += points[i-1];
        if(i == 0) distances[i].push_back(0);
        for(ll j = 0; j <= i; j++) {
            distances[i].push_back(pom - points[j]);
        }
    }

    ll ret = 0;

    for (ll i = 0; i < n; i++) {
        sort(distances[i].begin(), distances[i].end());
        for(ll j = 0; j < distances[i].length())
    }

    return 0;
}