#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,h,m,c,d,e;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>h>>m;
          c=1440-(h*60+m);

          cout<<c<<endl;
     }
}
