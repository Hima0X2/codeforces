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
     long long int t,k,i;
     cin>>t;
     vector<long long int> v;
     for(i=1;i<=10000;i++){
          if(i%3!=0&&i%10!=3){
               v.push_back(i);
          }
     }
     while(t--){
          cin>>k;
          cout<<v[k-1]<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH


