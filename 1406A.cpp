/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
int a,b[mx];
int mem(){
for(int i=0;i<101;i++){
     if(!b[i]){
          return i;
     }
     b[i]--;
}
}
int main()
{
     optimize();
      int t,n,i;
     cin>>t;
     while(t--){
          cin>>n;
          memset(b,0,sizeof(b));
          for(i=0;i<n;i++){
               cin>>a;
               b[a]++;
          }
          cout<<mem()+mem()<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH


