#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>

using namespace std;

#define ll long long

// dla kazdego pojedynczego slowa potrzebuje miec rowno tych ktore sa powtorzone dwukrotnie

string s;
ll k;

ll ln;

int main () {
    cin >> s >> k;

    ln = s.length();

    if (ln % k != 0) {
        cout << "NO" << endl;
        return 0;
    }

    ln /= k;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < ln / 2; j++) {
            //[0 ; 1 ; ... ln-2 ; ln-1]
            if (s[j + i * ln] != s[(i+1) * ln - j - 1]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}