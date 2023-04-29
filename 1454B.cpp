/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,n,i;
     cin>>t;
     while(t--){
               long long int mn=mx,p;
               map<long long int,long long int> mp;
               vector<long long int> v;
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
               mp[a[i]]++;
          }
      for(i=0;i<n;i++){
          if(mp[a[i]]==1){
     v.push_back(a[i]);
     v.push_back(i+1);
          }
      }
      if(!v.size()){
          cout<<-1<<endl;
      }
      else{
       for(i=0;i<v.size();i=i+2){
            if(mn>v[i]){
               mn=v[i];
               p=i;
            }
       }
       cout<<v[p+1]<<endl;
      }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH

