#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a=0,b=0,c=0,d,z=0,j,k,l;
    cin>>t;
    int s[t],m[10000],n[10000],o[10000];
    for(i=0,j=0,k=0,l=0; i<t;i++)
    {
        cin>>s[i];
        if(s[i]==1)
        {
            a++;
            m[j]=i+1;
            j++;
        }
        else if(s[i]==2)
        {
            b++;
             n[k]=i+1;
             k++;
        }
        else
        {
            c++;
             o[l]=i+1;
             l++;
        }
    }
    d=min(a,min(b,c));
    if(d==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
         cout<<d<<endl;
        for(i=0; i<d; i++)
        {
           cout<<m[i]<<" "<<n[i]<<" "<<o[i]<<endl;
        }
}
}
