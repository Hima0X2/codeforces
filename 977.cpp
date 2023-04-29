#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,i;
     cin>>n;
      cin>>a;
     for(i=1;i<=a;i++)
     {
      if(n%10==0)
     {
          n=n/10;
     }
     else
     {
          n--;
     }
     }
     cout<<n;
     return 0;
}
