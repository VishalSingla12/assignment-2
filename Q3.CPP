//Name:Vishal SIngla
//Roll no.:1024240009
#include <bits/stdc++.h>
using namespace std;

/* Q3(a): Missing Number Linear Time */
int missingLinear(vector<int> arr, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int x : arr) sum += x;
    return total - sum;
}

/* Q3(b): Missing Number Binary Search */
int missingBinary(vector<int> arr, int n) {
    int l = 0, r = n - 2;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == mid + 1) l = mid + 1;
        else r = mid - 1;
    }
    return l + 1;
}

int main() {
    vector<int> arr = {1,2,3,5};
    cout << "Q3(a) Missing Linear: " << missingLinear(arr,5) << endl;
    cout << "Q3(b) Missing Binary: " << missingBinary(arr,5) << endl;
    return 0;
}
