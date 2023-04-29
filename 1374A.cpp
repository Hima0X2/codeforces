#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,t,k,x,y,ans;
     cin>>t;
     while(t--)
          {
          cin>>x>>y>>n;
          ans=((n-y)/x)*x+y;
          cout<<ans<<endl;
     }
}
