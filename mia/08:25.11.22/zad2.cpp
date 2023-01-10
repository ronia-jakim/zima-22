#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll unsigned long long int

ll n;

ll fact5 = 120;

int main () {
    cin >> n;

    // wybiream poziome

    ll ret = (n * (n-1) * (n-2) * (n-3) * (n-4)) / 120ll;\
    ret *=  (n * (n-1) * (n-2) * (n-3) * (n-4));
    //ret /= 120;

    cout << ret << endl;

    return 0;
}