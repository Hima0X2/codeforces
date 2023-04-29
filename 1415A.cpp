#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,r,m,c,d,e,t;
     cin>>t;
     while(t--){
     cin>>n>>m>>r>>c;
     d=max(n-r,r-1);
     e=max(m-c,c-1);
     cout<<d+e<<endl;
     }
}

