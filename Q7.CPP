//Name:Vishal SIngla
//Roll no.:1024240009
#include <bits/stdc++.h>
using namespace std;

int mergeCount(vector<int>& arr, int l, int r) {
    if (l >= r) return 0;
    int m = (l + r) / 2;
    int inv = mergeCount(arr, l, m) + mergeCount(arr, m + 1, r);
    vector<int> temp;
    int i = l, j = m + 1;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else { temp.push_back(arr[j++]); inv += m - i + 1; }
    }
    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);
    for (int k = l; k <= r; k++) arr[k] = temp[k - l];
    return inv;
}

int main() {
    vector<int> arr = {2,4,1,3,5};
    cout << "Inversions: " << mergeCount(arr,0,arr.size()-1) << endl;
    return 0;
}
