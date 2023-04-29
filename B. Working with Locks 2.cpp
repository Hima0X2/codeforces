#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long  k,l,c=0,l1[100000000],k1[100000000],i;
     map<long long,long long> mp;
     cin>>k;
     for(i=0;i<k;i++){
          cin>>k1[i];
          mp[k1[i]+1]=1;
          mp[k1[i]-1]=1;
     }
     cin>>l;
     for(i=0;i<l;i++){
          cin>>l1[i];
          if(mp[l1[i]]==1){
                 c++;
          }
     }
      cout<<c<<endl;
}

