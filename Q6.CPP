//Name:Vishal SIngla
//Roll no.:1024240009
#include <bits/stdc++.h>
using namespace std;

struct Triplet { int r, c, val; };

vector<Triplet> transpose(vector<Triplet> mat) {
    vector<Triplet> res;
    for (auto &t : mat) res.push_back({t.c, t.r, t.val});
    return res;
}

vector<Triplet> addSparse(vector<Triplet> A, vector<Triplet> B) {
    A.insert(A.end(), B.begin(), B.end());
    map<pair<int,int>,int> m;
    for (auto &t : A) m[{t.r,t.c}] += t.val;
    vector<Triplet> res;
    for (auto &p : m) res.push_back({p.first.first, p.first.second, p.second});
    return res;
}

vector<Triplet> multiplySparse(vector<Triplet> A, vector<Triplet> B) {
    map<pair<int,int>,int> m;
    for (auto &x : A) {
        for (auto &y : B) {
            if (x.c == y.r) m[{x.r, y.c}] += x.val * y.val;
        }
    }
    vector<Triplet> res;
    for (auto &p : m) res.push_back({p.first.first, p.first.second, p.second});
    return res;
}

int main() {
    vector<Triplet> A = {{0,0,1},{0,1,2},{1,1,3}};
    vector<Triplet> B = {{0,0,4},{1,0,5},{1,1,6}};
    auto C = multiplySparse(A,B);
    cout << "Sparse Multiply Result: ";
    for (auto &t : C) cout << "(" << t.r << "," << t.c << "," << t.val << ") ";
    cout << endl;
    return 0;
}
