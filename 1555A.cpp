#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,n,i;
     cin>>t;
     while(t--){
          cin>>n;
          if(n<=6){
               cout<<15<<endl;
          }
          else if(n%2){
               n=(n+1)/2;
               cout<<n*5<<endl;
          }
          else{
               n=n/2;
                cout<<n*5<<endl;
          }
     }
//std::cout << std::fixed << std::setprecision(2);
}


