#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a=0,b=0,c=0,d;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        d=s.length();
        for(i=0; i<d; i++)
        {
            if(s[i]=='1')
            {
                a=i;
                break;
            }
        }
        for(j=d-1; j>=0; j--)
        {
            if(s[j]=='1')
            {
                b=j;
                break;
            }
        }
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        for(i=a; i<=b; i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
        }
        cout<<c<<endl;
        c=0;
        a=0;
        b=0;
    }
}
