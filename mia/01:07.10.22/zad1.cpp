#include<iostream>
#include<vector>
#include<algorithm>

int main () {
    int odd = 0;
    int even = 0;

    int n;
    std::cin >> n;

    std::vector<int> arr;

    for (int i = 0; i < n; i++) {
        int p;
        std::cin >> p;
        arr.push_back(p);
        if (p % 2 == 1) odd++;
        else even++;
    }

    int diff;
    int now;

    if (even > odd) {
        diff = even - odd;
        now = 0;
        if (even - odd <= 1) {
            std::cout << "0" << "\n";
            return 0;
        }
    }
    else {
        diff = odd - even;
        now = 1;
        if (odd - even <= 1) {
            std::cout << "0" << "\n";
            return 0;
        }
    }

    std::sort(arr.begin(), arr.end());

    int ret = 0;

    int moves = 0;

    for (int i = 0; i < n; i++) {
        if (moves + 1 == diff) {
            std::cout << ret << "\n";
            return 0;
        }

        if (arr[i] % 2 == now) {
            now = arr[i] % 2;
            ret += arr[i];
            moves++;
        }
    }

    std::cout << ret << "\n";

    return 0;
}