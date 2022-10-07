#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main () {
    long long int n, m, k;

    cin >> n;
    cin >> m;
    cin >> k;

    vector<long long int> b; // posortowany od razu

    for (int i = 0; i < n; i++) {
        long long int p;
        cin >> p;
        b.push_back(p);
    }

    vector<long long int> d;

    long long int ret = k;

    for (long long int i = 1; i < n; i++) d.push_back(b[i] - b[i-1]);
    
    sort(d.begin(), d.end());

    for (long long int i = 0; i < d.size() - (k - 1); i++) ret += d[i];

    cout << ret;

    cout << endl;

    return 0;
}