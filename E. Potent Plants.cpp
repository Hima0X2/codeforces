#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,w,i,d,sum=0;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>w;
        cin>>s;
        d=s.length();
        for(i=0; i<d; i++)
        {
           sum=sum+int(s[i]-'A'+1);
        }
        if(sum<=w)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
