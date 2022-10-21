#include<iostream>
#include<vector>

using namespace std;

int main () {
    int r, c, n, k;

    cin >> r >> c >> n >> k;

    vector<int> cx;
    vector<int> cy;

    for (int i = 0; i < n; i++) {
        int x, y;

        cin >> x >> y;

        cx.push_back(x);
        cy.push_back(y);
    }

    int ret = 0;

    for (int x1 = 1; x1 <= r; x1++) { // lewy gorny
        for (int y1 = 1; y1 <= c; y1++) {
            for (int x2 = x1; x2 <= r; x2++) { // prawy dolny
                for (int y2 = y1; y2 <= c; y2++) {
                    int pom = 0;

                    for (int i = 0; i < n; i++) {
                        if (cx[i] >= x1 && cx[i] <= x2) {
                            if (cy[i] >= y1 && cy[i] <= y2) {
                                pom++;
                            }
                        }
                    }

                    if (pom >= k) ret++;
                }
            }
        }
    }

    cout << ret << endl;

    return 0;
}