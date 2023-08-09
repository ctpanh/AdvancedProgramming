#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i+=2)
        {
            cout << s[i];
        } 
        cout << " ";
        for (int i = 1; i < s.size(); i+=2)
        {
            cout << s[i];
        }   
        cout << "\n";
    }
    return 0;
}
