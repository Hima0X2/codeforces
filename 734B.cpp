#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,d,sum,i,z256,z32;
     cin>>a>>b>>c>>d;
   z256=min(a,min(c,d));
   z32=min((a-z256),b);
   sum=256*z256+32*z32;
   cout<<sum<<endl;
}
