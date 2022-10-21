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
            for (int i = 0; i < n; i += 2) {
                if (dziewczynki[i] % 2 == 0) {
                    if (dziewczynki[i] > dziewczynki[i+1]) {
                        int pom = dziewczynki[i];
                        dziewczynki[i] = dziewczynki[i+1];
                        dziewczynki[i+1] = pom;
                    }
                    else {
                        if (i == 0) {
                            int pom = dziewczynki[i];
                            dziewczynki[i] = dziewczynki[n];
                            dziewczynki[n] = pom;
                        }
                        else {
                            int pom = dziewczynki[i];
                            dziewczynki[i] = dziewczynki[i-1];
                            dziewczynki[i-1] = pom;
                        }
                    }
                }
                else {
                    if (dziewczynki[i] < dziewczynki[i+1]) {
                        int pom = dziewczynki[i];
                        dziewczynki[i] = dziewczynki[i+1];
                        dziewczynki[i+1] = pom;
                    }
                    else {
                        if (i == 0) {
                            int pom = dziewczynki[i];
                            dziewczynki[i] = dziewczynki[n];
                            dziewczynki[n] = pom;
                        }
                        else {
                            int pom = dziewczynki[i];
                            dziewczynki[i] = dziewczynki[i-1];
                            dziewczynki[i-1] = pom;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) cout << dziewczynki[i] << " ";
    cout << endl;

    return 0;
}

