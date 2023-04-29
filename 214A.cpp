#include<bits/stdc++.h>
using namespace std;
int main()
{
     int m,n,a,b,c=0;
     cin>>m>>n;
     for(a=0; a * a <= n && a <= m;a++)
     {
         b=n-a*a;
         if((a+b*b)==m)
         {
              c++;
         }
     }
     cout<<c<<endl;
}
