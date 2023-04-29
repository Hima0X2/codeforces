#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,c=1;
    cin>>t;
    while(t--)
    {
        c=1;
        cin>>a;
        while(a>=0)
        {
            if(a%11==0&&a>=11)
            {
                cout<<"YES\n";
                c=0;
                break;
            }
            else
            {
                a=a-111;
            }
        }
        if(c)
        {
            cout<<"NO\n";
        }
    }
}


