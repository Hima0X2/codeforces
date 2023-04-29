/// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t, i, a, b, c;
    string m, n, s;
    cin >> t;
    while (t--)
    {
        int k = 0;
        s = "";
        // cout<<s.size()<<endl;
        cin >> m >> n;
        while (n.size() != 0)
        {
            if (m.size() == 0)
            {
                s = s + n[n.size() - 1];
                n.pop_back();
                continue;
            }
            if (m[m.size() - 1] > n[n.size() - 1])
            {
                if (n.size() < 2)
                {
                    k = -1;
                    break;
                }
                a = (n[n.size() - 1] - '0') + (n[n.size() - 2] - '0')*10;
                b = m[m.size() - 1] - '0';
                n.pop_back();
                c = a - b; if (c>=10 || c<0)
                {
                    k=-1;
                    break;
                    }
                s = s + to_string(c);
            }
            else
            {
                s += to_string(n[n.size() - 1] - m[m.size() - 1]);
            }
            m.pop_back();
            n.pop_back();
        }
        if (k == -1 || m.size()>0)
        {
            cout << -1 << endl;
        }
        else
        {
            while (s.size() > 0)
            {
                if (s[s.size() - 1] == '0')
                    s.pop_back();
                else
                    break;
            }

            reverse(s.begin(), s.end());
            if (s.size() == 0)
                s += '0';

            cout << s << endl;
        }
    }
    //std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
