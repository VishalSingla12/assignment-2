//Name:Vishal SIngla
//Roll no.:1024240009
#include <bits/stdc++.h>
using namespace std;

int countDistinct(vector<int> arr) {
    set<int> s(arr.begin(), arr.end());
    return s.size();
}

int main() {
    vector<int> arr = {1,2,2,3,4,4,5};
    cout << "Distinct Count: " << countDistinct(arr) << endl;
    return 0;
}
