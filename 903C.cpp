#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,a[10000],c=0,d;
     map<int,int> mp;
     cin>>t;
     for(i=0;i<t;i++){
          cin>>a[i];
          mp[a[i]]++;
     }
    for(i=0;i<t;i++){
     c=max(c,mp[a[i]]);
    }
    cout<<c<<endl;
}
