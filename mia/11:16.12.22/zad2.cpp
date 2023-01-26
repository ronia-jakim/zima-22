#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

#define ll long long

string name[2] = {"Ashishgup", "FastestFinger"};

int t;
ll n;
vector<string> ret;

// chyba optymalnie jest dzielic przez najwiekszy dzielnik nieparzysty, a jesli sie nie da to dopiero wtedy odejmujemy

int prime (ll n);

int main () {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        ll oryg_n = n;

        int a = (n == 1);

        if (n % 2 == 0 && n > 2) {
            ll g = (n & (n-1));

            if (g == 0) a = 1;
            else if (n % 4 != 0 && prime(n)) a = 1;
        }

        if (a) cout << name[1] << endl;
        else cout << name[0] << endl;
    }

    return 0;
}

int prime (ll n) {
    for (ll i = 3; i * i < n; i+=2) {
        if (n % i == 0) return 0;
    }
    return 1;
}