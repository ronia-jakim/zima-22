#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> ret;

    int x, y;
    cin >> x >> y;

    ret.push_back(x);
    ret.push_back(y);

    for (int i = 1; i < n-1; i++) {
        x, y;
        cin >> x >> y;

        int len = ret.size();

        for (int j = 0; j < len; j++) {
            if ()
        }
    }

    return 0;
}