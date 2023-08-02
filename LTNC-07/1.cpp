#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int l, int r, int num) {
    int mid = (l + r) / 2;
    if (l > r) {
        return -1;
    }
    if (v.at(mid) == num) {
        return mid;
    } else if (num < v.at(mid)) {
        return binarySearch(v, l, mid - 1, num);
    } else {
        return binarySearch(v, mid + 1, r, num);
    }
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    int num;
    cin >> num;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << binarySearch(v, 0, n - 1, num);
}