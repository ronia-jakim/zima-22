#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

int main () {
    int n, q;
    cin >> n >> q;

    vector<int> dziewczynki;

    for (int i = 1; i <= n; i++) {
        dziewczynki.push_back(i);
    }

    for (int i = 0; i < q; i++) {
        int typ, ruch;
        cin >> typ;
        if (typ == 1) {
            cin >> ruch;
            vector<int> pom;
            if (ruch % n != 0) {
                for (int i = 0; i < n; i++) {
                    int pos = i - ruch;
                    if (pos < 0) pos += n;
                    if (pos >= n) pos %= n;
                    pom.push_back(dziewczynki[pos]);
                }
                dziewczynki = pom;
            }
            
        }
        else {
            if (dziewczynki[0] % 2 == 0) 
        }
    }

    for (int i = 0; i < n; i++) cout << dziewczynki[i] << " ";
    cout << endl;

    return 0;
}