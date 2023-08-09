#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, long> m;
    long n; 
    cin >> n;
    string s;
    long x;
    for (long i = 0; i < n; i++) {
        cin >> s;
        cin >> x;
        m[s] = x;
    }
    while (cin >> s) {
        if (m.find(s) == m.end()) {
            cout << "Not found\n";
        } else {
            cout << s << "=" << m[s] << "\n";
        }
    }
    return 0;
}