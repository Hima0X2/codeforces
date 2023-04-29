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
     long long int t,i,n,d;
     cin>>t;
     while(t--){
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          d=a[0];
          for(i=1;i<n;i++){
               d=d&a[i];
          }
cout<<d<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}


