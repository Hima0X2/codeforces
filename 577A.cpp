#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,j=1,n,m,c=0;
     float sum;
     int sub;
     cin>>n>>m;
         for(i=1;i<=n;i++)
     {
          if (m % i == 0 &&  m / i <= n)
               {
                    c++;
               }
          }
     cout<<c<<endl;
}
