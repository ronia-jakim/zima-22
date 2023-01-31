#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t;

ll n,m;
vector<int> l;

int M = 64;

int main () {
    cin >> t;

    for (int i = 0; i < t; i++) {
        l.clear();
        l.insert(l.end(), M+5, 0);

        cin >> n >> m;

        ll sum = 0;

        for (int j = 0; j < m; j++) {
            ll pom;
            cin >> pom;
            int p = log2(pom);
            l[p]++;
            sum += pom;
        }

        int div = 0;

        if (sum < n) {
            cout << -1 << endl;
            continue;
        }

        for (int j = 0; j < M; j++) {
            if ((n & (1LL<<j)) != 0) {
                if (l[j] > 0) {
                    l[j]--;
                }
                else {
                    while (j < M && l[j] == 0) {
                        j++;
                        div++;
                    }
                    l[j]--;
                    j--;
                    continue;
                }
            }
            l[j+1] += l[j] / 2;
        }
        cout << div << endl;
    }

    return 0;
}