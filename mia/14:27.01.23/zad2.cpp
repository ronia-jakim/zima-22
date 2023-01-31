#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pp pair<int, int>

vector<pp> przekroj (pp l1, pp r1, pp l2, pp r2) {
    vector<pp> ret;
    int lx, ly, rx, ry;

    lx = max(l1.first, l2.first);
    ly = max(l1.second, l2.second);

    ret.push_back({lx, ly});

    rx = min(r1.first, r2.first);
    ry = min(r1.second, r2.second);

    ret.push_back({rx, ry});
    return ret;
}

int main () {
    int x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;
    pp white[2] = {{x1, y1}, {x2, y2}};

    cin >> x1 >> y1 >> x2 >> y2;
    pp bl_1[2] ={{x1, y1}, {x2, y2}};

    cin >> x1 >> y1 >> x2 >> y2;
    pp bl_2[2] ={{x1, y1}, {x2, y2}};

    // na pewno jezeli pole czarnych jest mniejsze niz pole bialego, to nie smiga

    int a_w = white[1].first - white[0].first;
    int b_w = white[1].second - white[0].second;

    int p_w = a_w * b_w;

    vector<pp> i_1 = przekroj(white[0], white[1], bl_1[0], bl_1[1]);
    int p_1 = 0;
    pp i_1l = i_1[0];
    pp i_1r = i_1[1];

    if (i_1l.first <= i_1r.first && i_1l.second <= i_1r.second) {
        p_1 = (i_1r.first - i_1l.first) * (i_1r.second - i_1l.second);
    }

    vector<pp> i_2 = przekroj(white[0], white[1], bl_2[0], bl_2[1]);
    int p_2 = 0;
    pp i_2l = i_2[0];
    pp i_2r = i_2[1];

    if (i_2l.first <= i_2r.first && i_2l.second <= i_2r.second) {
        p_2 = (i_2r.first - i_2l.first) * (i_2r.second - i_2l.second);
    }

    vector<pp>i_i = przekroj(i_1l, i_1r, i_2l, i_2r);
    int p_i = 0;
    pp i_il = i_i[0];
    pp i_ir = i_i[1];

    if (i_il.first <= i_ir.first && i_il.second <= i_ir.second) {
        p_i = (i_ir.first - i_il.first) * (i_ir.second - i_il.second);
    }

    if (p_w > p_1 + p_2 - p_i) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;

    return 0;
}