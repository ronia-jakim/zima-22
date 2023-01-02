#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main () {
    int n, m;
    vector<int> parts;
    map<int,int> force;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        parts.push_back(v);
    }

    int sum = 0;
    //for (int i = 0; i < n; i++) cout << parts[i] << endl;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (parts[a-1] < parts[b-1]) sum += parts[a-1];
        else sum += parts[b-1];
    }

    cout << sum << endl;
}