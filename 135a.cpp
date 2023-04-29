#include<bits/stdc++.h>
using namespace std;
int main1()
{
     int t,n,a,b=0,c,d;
     cin>>t;
     for(a=1;a<=t;a++)
     {
          cin>>n;
           for(c=1,d=n-1;c<d;c++,d--)
     {
          b++;
     }
     cout<<b<<endl;
     b=0;
     }
    return 0;
}
int main()
{
      int t,n,a,b=0,c,d;
     cin>>t;
     for(a=1;a<=t;a++)
     {
          cin>>n;
          if(n==1||n==0)cout<<"0"<<endl;
          else cout<<(n-1)/2<<endl;
     }
}
