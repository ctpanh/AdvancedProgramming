#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);
    
    int n = stoi(ltrim(rtrim(n_temp)));
    int max = 0;
    int count = 0;
    int size = 0;
    int* a = new int[1000];
    while (n > 0)
    {
        a[size] = n % 2;
        size ++;
        n /= 2;
    }
    int i = 0;
    while (i < size)
    {
        if (a[i] == 0)
        {
            count = 0;
            i++;
        }
        else
        {
            count++;
            if (count > max) max = count;
            i++;
        }
    }
    cout << max;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
