#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i,a[1000];
     cin>>t;
     while(t--){
          cin>>n;
          vector<long long int> v;
           vector<long long int> b;
          for(i=0;i<n;i++){
               cin>>a[i];
               v.push_back(a[i]);
          }
          sort(v.begin(),v.end());
           b.emplace_back(v[0]);
           for(i=1;i<n;i++){
               if(v[i]!=v[i-1]){
                    b.emplace_back(v[i]);
               }
          }
          for(i=1;i<n;i++){
               if(v[i]==v[i-1]){
                    b.emplace_back(v[i]);
               }
          }
          for(i=0;i<b.size();i++){
               cout<<b[i]<<" ";
          }
          cout<<endl;
     }
}
