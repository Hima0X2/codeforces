/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
//long long int a[mx][mx];

int main()
{
     optimize();
     long long int t,n,k,df;
     cin>>t;
     while(t--){
      cin>>k;
      long long int x=sqrt(k);
      df=k-x*x;
      if(df==0){
          cout<<x<<" "<<1<<endl;
      }
      else if(df<=x+1){
          cout<<df<<" "<<x+1<<endl;
      }
      else{
               x=x+1;
          cout<<x<<" "<<(x*x)-k+1<<endl;
      }
      }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



