#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int q, type, mark;
    string name;
    map<string, int> M;

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> type >> name;
        switch (type)
        {
        case 1:
            cin >> mark;
            M[name] += mark;
            break;
        case 2:
            M.erase(name);
            break;
        case 3:
            cout << M[name] << endl;
        }
    }
    return 0;
}