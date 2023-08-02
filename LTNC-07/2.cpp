#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "abcd";
    for (int i = 0; i < (int) s.length(); ++i)
    {
        for (int j = 0; j < (int) s.length(); ++j)
        {
            for (int k = 0; k < (int) s.length(); ++k)
            {
                string str = "";
                str += s[i];
                str += s[j];
                str += s[k];
                cout << str << endl;
            }
        }
    }
}