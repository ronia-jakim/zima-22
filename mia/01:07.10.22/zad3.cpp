#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main () {

    unsigned int n, m;

    cin >> n; // wiersze
    cin >> m; // kolumny

    vector<vector<unsigned int>>A;
    vector<vector<unsigned int>>B;

    unsigned int p;

    for (unsigned int i = 0; i < n; i++) {
        vector<unsigned int> vp;
        for (unsigned int j = 0; j < m; j++) {
            cin >> p;
            vp.push_back(p);
        }
        A.push_back(vp);
    }

    for (unsigned int i = 0; i < n; i++) {
        vector<unsigned int> vp;
        for (unsigned int j = 0; j < m; j++) {
            cin >> p;
            vp.push_back(p);
        }
        B.push_back(vp);
    }

    unsigned int max = m;
    if (n > m) max = n;

    for (unsigned int c = 0; c < max; c++) {
        vector<unsigned int> pA;
        vector<unsigned int> pB;

        for (unsigned int r = 0; r < c+1; r++) {
            pA.push_back(A[(c-r) % n][r % m]);
            pB.push_back(B[(c-r) % n][r % m]);
        }

        sort(pA.begin(), pA.end());
        sort(pB.begin(), pB.end());

        for (unsigned int i = 0; i < pA.size(); i++) {
            if (pA[i] != pB[i]) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES";

    cout << endl;
    return 0;
}