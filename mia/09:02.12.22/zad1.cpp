#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

#define ll long long

int n;
vector<int> p;

vector<int> nr;
vector<int> ret;
vector<int> odwiedzone;

void dfsik(int i);

int main () {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int pom;
        cin >> pom;
        pom--;
        p.push_back(pom);
        nr.push_back(0);
        odwiedzone.push_back(0);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            odwiedzone[j] = 0;
            nr[j] = 0;
        }

        dfsik(i);

        //for(int j = 0; j < n; j++) cout << nr[j] << " ";
        //cout << "##" << endl;

        for(int j = 0; j < n; j++) {
            if(nr[j] >= 2) {
                ret.push_back(j+1);
                break;
            }
        }
    }

    for(int i = 0; i < n; i++) cout << ret[i] << " ";
    cout << endl;

    return 0;
}

void dfsik(int i) {
    if(odwiedzone[i] == 1) {
        nr[i]++;
        return;
    }
    nr[i]++;
    odwiedzone[i] = 1;
    dfsik(p[i]);
}