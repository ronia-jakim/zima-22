#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n, k;
vector<int> twierdzonka;
vector<int> spanko; // 0 gdy spi

vector<ll> mierzeja;

ll ret;

int main () {
    cin >> n >> k;

    ret = 0;

    for (int i = 0; i < n; i++) {
        int pom;
        cin >> pom;
        twierdzonka.push_back(pom);
    }

    mierzeja.push_back(0);

    for (int i = 0; i < n; i++) {
        int pom;
        cin >> pom;
        spanko.push_back(pom);

        if (pom) {
            ret += twierdzonka[i];
            twierdzonka[i] = 0;

            mierzeja.push_back(0);
            mierzeja[i+1] += mierzeja[i];
            //if (i - k >= 0) mierzeja[i] -= twierdzonka[i-k];
        }
        else {
            mierzeja.push_back(twierdzonka[i]);
            mierzeja[i+1] += mierzeja[i];
        }
    }
    ll mynio = 0;

    for (int i = n; i >= k; i--) {
        ll pom = mierzeja[i] - mierzeja[i-k];
        if (mynio < pom) mynio = pom;
    }

    //for (int i = 0; i <= n; i++) cout << mierzeja[i] << " ";
    //cout << endl;

    //sort(mierzeja.begin(), mierzeja.end());

    //int pys = mierzeja[mierzeja.size()-1];

    //cout << ret << " | " << pys << " | " << mynio << endl;

    ret += mynio;

    cout << ret << endl;
    
    return 0;
}