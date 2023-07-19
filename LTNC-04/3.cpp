#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
bool isPalindrome(string s, int start, int end)
{
    while (start < end && s[start] == s[end])
    {
        start++;
        end--;
    }
    return start >= end;
}

int palindromeIndex(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end && s[start] == s[end])
    {
        start++;
        end--;
    }
    if (start >= end)
        return -1;
    if (isPalindrome(s, start + 1, end))
        return start;
    if (isPalindrome(s, start, end - 1))
        return end;
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

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