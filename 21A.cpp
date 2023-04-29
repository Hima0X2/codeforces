#include<bits/stdc++.h>
using namespace std;
int i, j, k, m, n;

int good(string s)
{
    if (s.size() < 1 || s.size() > 16)
        return 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]) || s[i] == '_')
        {

        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int jabber(string s)
{
    i = s.find('@');
    if (i == -1)
    {
        return 0;
    }
    if (!good(s.substr(0, i)))
    {
        return 0;
    }
    s = s.substr(i+1);

    i = s.find('/');
    if (i != -1)
    {
        if (!good(s.substr(i+1)))
        {
            return 0;
        }
        s = s.substr(0, i);
    }
    while (1)
    {
        i = s.find('.');
        if (i == -1)
        {
            return good(s);
        }
        else
        {
            if (!good(s.substr(0, i)))
            {
                return 0;
            }
            s = s.substr(i+1);
        }
    }
}

int main()
{
    string s;
    cin >> s;

    if (jabber(s))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
