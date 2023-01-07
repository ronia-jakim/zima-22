#include<iostream>
#include<vector>
#include<string>

// POMYSŁ GIT, ALE REKURENCJA TO TROSZKE ZA DUZO XD

using namespace std;

int cosiek(string s);

int main () {
    string s;
    cin >> s;

    if (s[0] == 'w' || s[0] == 'm')  {
        cout << 0 << endl;
        return 0;
    }

    cout << cosiek(s) << endl;

    return 0;
}

int cosiek(string s) {
    if (1 >= s.length()) return 1;
    if (s[1] == 'w' || s[1] == 'm') return 0;
    
    string end = s.substr(1);
    string end2 = s.substr(2);

    if (s[1] == 'u') {
        if (s[0] == 'u') {
            string u = "u", w = "w";
            return cosiek(w.append(end2)) + cosiek(u.append(end2));
        }
    }

    else if (s[1] == 'n') {
        if (s[0] == 'n') {
            string n = "n", m = "m";
            return cosiek(m.append(end2)) + cosiek(n.append(end2));
        }
    }

    return cosiek(end);
}