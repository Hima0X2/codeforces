#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i,p,sum=0,c=0;
     cin>>t;
   vector<long long int> v;
     for(i=1;i<10;i++){
               sum=0;
               p=10;
          while(p--){
               sum=sum*10+i;
               v.push_back(sum);
          }
     }
     sort(v.begin(),v.end());
     while(t--){
               c=0;
               cin>>n;
     for(i=0;i<v.size();i++){
          if(v[i]<=n){
               c++;
          }
          else{
               break;
     }
     }
     cout<<c<<endl;
     }
}

