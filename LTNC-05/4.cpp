#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;
        vector<int>::iterator p = lower_bound(v.begin(), v.end(), num);
        if (num != *p)
        {
            cout << "No"
                 << " " << (p - v.begin() + 1) << endl;
        }
        else
        {
            cout << "Yes"
                 << " " << (p - v.begin() + 1) << endl;
        }
    }
    return 0;
}
