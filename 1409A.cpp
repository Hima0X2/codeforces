#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,a,b,i;
    cin>>t;
    while(t--)
    {
         cin>>a>>b;
         double d=abs(a-b);
         int z=ceil(d/10);
          cout<<z<<endl;
    }
}

