#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int n;
vector<int> somsiad[150000];
int odwiedzone[150000];

bool dfs(int tato, int dziadzio);

int main () {
    int n,m;

    cin >> n >> m;

    for (int i = 0; i < 150000; i++) odwiedzone[i] = 0;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        somsiad[a].push_back(b);
        somsiad[b].push_back(a);
    }

    cout << "YES" << endl;

    return 0;
}

bool dfs(int tato, int dziadzio) {
    
}