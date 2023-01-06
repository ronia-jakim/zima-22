#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

#define ll long long

int n;
vector<int> somsiad[150000];
int odwiedzone[150000];

ll krawedzie, wierzcholki;

void dfsik(int v);

int main () {
    int n,m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) odwiedzone[i] = 0;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        somsiad[a].push_back(b);
        somsiad[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        if (odwiedzone[i] == 0) {
            krawedzie = 0;
            wierzcholki = 0;
            dfsik(i);

            ll klikowo = wierzcholki * (wierzcholki - 1);
            if (klikowo != krawedzie) {
                cout << "NO" << endl;
                return 0; 
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}

void dfsik(int v) {
    //if (odwiedzone[v]) return;

    odwiedzone[v] = 2137;
    wierzcholki++;
    krawedzie += somsiad[v].size();

    for (int i = 0; i < somsiad[v].size(); i++) {
        int next = somsiad[v][i];
        if (odwiedzone[next] == 0) dfsik(next);
    }
}