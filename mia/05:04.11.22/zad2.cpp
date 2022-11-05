#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main () {
    int n,m;

    cin >> n >> m;

    vector<int> somsiad [n];

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        somsiad[a].push_back(b);
        somsiad[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        int len = somsiad[i].size();

        
    }

    cout << "YES" << endl;

    return 0;
}