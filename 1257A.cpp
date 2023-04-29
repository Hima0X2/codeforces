#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,a,b,x,n;
     cin>>t;
     while(t--){
          cin>>n>>x>>a>>b;
          int d=min(n-1,abs(a-b)+x);
          cout<< d<<endl;
     }
}
