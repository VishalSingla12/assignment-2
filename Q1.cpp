//Name:Vishal SIngla
//Roll no.:1024240009
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int x) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    cout << "Binary Search (find 3): " << binarySearch(arr,3) << endl;
    return 0;
}
