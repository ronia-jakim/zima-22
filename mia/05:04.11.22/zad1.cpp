#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main () {
    int k, n, m;

    cin >> n >> k >> m;

    vector<string> slowa;

    for (int i = 0; i < n; i++) {
        string pom;
        cin >> pom;
        slowa.push_back(pom);
    }

    vector<long long> a;

    for (int i = 0; i < n; i++) {
        long long pom;
        cin >> pom;
        a.push_back(pom);
    }

    return 0;
}