#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,a[10000],j;
     cin>>t;
     while(t--){
               int c=0;
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          vector<long long int> v;
           vector<long long int> v1;
          for(i=0;i<n;i++){
               if(a[i]%2==0){
                    v.push_back(a[i]);
               }
               else{
                    v1.push_back(a[i]);
               }
          }
          for(i=0;i<v1.size();i++){
               v.push_back(v1[i]);
          }
          for(i=0;i<n;i++){
               for(j=i+1;j<n;j++){
                         if(__gcd(v[i],(2*v[j]))>1){
                              c++;
                         }
               }
          }
          cout<<c<<endl;
     }
}
