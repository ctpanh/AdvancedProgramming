#include <bits/stdc++.h>
using namespace std;

vector<int> listOfPower(int num, int n) {
    vector<int> v;
    for (int i = 1; pow(i, n) <= num; i++) {
        v.push_back(pow(i, n));
    }
    return v;
}

int countSubsetsWithSum(vector<int>& nums, int n, int currentIndex, int currentSum) {
    if (currentIndex == nums.size()) {
        if (currentSum == n) {
            return 1;
        } else {
            return 0;
        }
    }
    int count1 = countSubsetsWithSum(nums, n, currentIndex + 1, currentSum + nums[currentIndex]);

    int count2 = countSubsetsWithSum(nums, n, currentIndex + 1, currentSum);

    return count1 + count2;
}

int powerSum(int X, int N)
{
    vector<int> v = listOfPower(X, N);
    return countSubsetsWithSum(v, X, 0, 0);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << powerSum(x, n);
}
