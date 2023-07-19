#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '2' && s[8] == 'A')
        {
            s[0] = '0';
            s[1] = '0';
        }

        if (s[i] == 'P')
        {
            if (s[0] == '1' && s[1] == '2')
            {
                s[0] = '1';
                s[1] = '2';
            }
            else
            {
                s[0] = s[0] + 1;
                s[1] = s[1] + 2;
            }
        }
    }
    return s.substr(0, 8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}