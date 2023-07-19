#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<vector<int>> v; 
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        int sizeI;
        cin >> sizeI;
        vector<int> arr;
        for(int j = 0; j < sizeI; j++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        v.push_back(arr);
    }
    for (int i = 0; i < q; i++){
        int _i, _j;
        cin >> _i >> _j;
        cout << v[_i][_j] << endl;
    }
    
    return 0;  
}