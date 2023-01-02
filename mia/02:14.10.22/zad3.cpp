#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main () {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string test;
        cin >> test;
        vector<char> alfabet {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
        };
        vector<char> keyboard;
        keyboard.push_back(test[0]);
        bool can = true;

        for (int j = 1; j < test.length(); j++) {
            auto it = find(keyboard.begin(), keyboard.end(), test[j]);
            if (it == keyboard.end()) {
                if (keyboard[keyboard.size() - 1] == test[j-1]) keyboard.push_back(test[j]);
                else if (keyboard[0] == test[j-1]) keyboard.insert(keyboard.begin(), test[j]);
                else {
                    can = false;
                    break;
                }
            }
            else {
                int index = it - keyboard.begin();
                if (index > 0) {
                    char przed = keyboard[index - 1];

                    if (przed != test[j-1]) {
                        if (j < test.length() - 1) {
                            if (przed != test[j+1]) {
                                can = false;
                                break;
                            }
                        }
                        else {
                            can = false;
                            break;
                        }
                    }
                }
                else if (index < keyboard.size() - 1) {
                    char po = keyboard[index + 1];

                    if (po != test[j-1]) {
                        if (j < test.length() - 1) {
                            if (po != test[j+1]) {
                                can = false;
                                break;
                            }
                        }
                        else {
                            can = false;
                            break;
                        }
                    }
                }
            }
        }

        if (can) {
            cout << "YES" << endl;
            for (int j = 0; j < keyboard.size(); j++) {
                cout << keyboard[j];
                for (int n = 0; n < alfabet.size(); n++) {
                    if(alfabet[n] == keyboard[j]) alfabet.erase(alfabet.begin()+n);
                }
            }

            for (int j = 0; j < alfabet.size(); j++) {
                cout << alfabet[j];
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
}