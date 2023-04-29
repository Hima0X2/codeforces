#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,d,sum=0,sub=0,j;
    string s;
    cin>>n;
    cin>>s;
    for(i=0; i<(n/2); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            sum=sum+int(s[i]);
        }
        else
        {
             cout<<"NO"<<endl;
             return 0;
        }
    }
    for(j=(n-1); j>=(n/2); j--)
    {
        if(s[j]=='4'||s[j]=='7')
        {
            sub=sub+int(s[j]);
        }
        else
        {
             cout<<"NO"<<endl;
             return 0;
        }
    }
    if(sum==sub)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
