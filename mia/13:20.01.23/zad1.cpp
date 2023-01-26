#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>

using namespace std;

#define ll long long

int t;

ll n;
vector<ll> a;

int main () {
    cin >> t;
    for (int i = 0; i < t; i++) {
    a.clear();
        cin >> n;
        for (int j = 0; j < n; j++) {
            ll pom;
            cin >> pom;
            a.push_back(pom);
        }
        
        sort(a.begin(), a.end());

        for (int i = n-1; i > 0; i--) {
            ll lol = a[i] | a[i-1];
            a[i-1] = lol;
            a[i] = 0;
        }

        cout << a[0] << endl;
    }
}