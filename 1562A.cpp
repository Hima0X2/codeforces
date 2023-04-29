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
     long long int t,i,n,l,r;
     cin>>t;
     while(t--){
        cin>>l>>r;
        if(l==r){
          cout<<0<<endl;
          continue;
        }
       if(2*l>r){
          cout<<r-l<<endl;
       }
       else{
               if(r%2){
          cout<<(r/2)<<endl;
               }
               else{
                  cout<<(r/2)-1<<endl;
               }
       }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



