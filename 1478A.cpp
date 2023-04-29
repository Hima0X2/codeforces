#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i,j,a[100000],sum=-1,c=1,d=0;
     cin>>t;
          while(t--){
                    map<long long int,long long int> mp;
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
               mp[a[i]]++;
               sum=max(sum,mp[a[i]]);
          }
        cout<<sum<<endl;
        sum=-1;
}
}
