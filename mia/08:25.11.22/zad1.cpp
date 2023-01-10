#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

ll n, m;

int main() {
    cin >> n >> m;
    ll nn = n;

    ll kmin, kmax;

    if (n % m == 0) {
        ll pom = n / m;
        kmin = pom * (pom - 1);
        kmin /= 2;
        kmin *= m;
    }
    else {
        ll r = n % m;
        n -= r;

        ll pom = n / m;
        kmin = pom * (pom - 1);
        kmin /= 2;
        kmin *= m;

        // do r druzyn dodaje jedna dusze, czyli ilosc przyjaciol w niej zwieksza sie o pom
        kmin += pom * r;
    }

    ll pom = nn - m + 1;
    //cout << "## " << pom << endl;
    kmax = pom * (pom - 1);
    kmax /= 2;

    // kiedy jest max? jeśli mam 6 ziomeczkow i wsadzam ich do 3 grup, to wsadzmy 2 do samotnych grup i 4 razem, to dostane 4*3/2 = 6

    cout << kmin << " " << kmax << endl;

    return 0;
}