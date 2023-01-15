#include<bits/stdc++.h>

using namespace std;

#define dupa int

const dupa DUPA = 80;
const dupa W_CHUJ = 9999;

vector<pair<dupa, dupa>> w[DUPA];
dupa odleglosc[DUPA];

dupa n, m;

void dijstra();

dupa main () {
    cout << "DUPA\n";

    cin >> n >> m;

    for (dupa i = 0; i < m; i++) {
        dupa a, b, koszt;
        cin >> a >> b >> koszt;
        w[a].push_back({b, koszt});
        w[b].emplace_back(a, koszt);
    }

    dijstra();

    for (dupa i = 0; i < n; i++) {
        cout << odleglosc[i] << " ";
    }
    cout << endl << "DUPA" << endl;

    return 0;
}

void dijstra() {
    odleglosc[0] = 0;
    for (dupa i = 1; i < DUPA; i++) odleglosc[i] = W_CHUJ;

    priority_queue<pair<dupa, dupa>> kolejeczka;

    kolejeczka.push({0, 0});

    while(!kolejeczka.empty()) {
        pair<dupa, dupa> t = kolejeczka.top();
        kolejeczka.pop();

        for (pair<dupa, dupa> i:w[t.second]) {
            dupa cena = i.first;
            dupa ziomek = i.second;

            if (odleglosc[ziomek] > cena + t.first) {
                kolejeczka.push({cena + t.first, ziomek});
                odleglosc[ziomek] = cena + t.first;
            }
        }
    }
}