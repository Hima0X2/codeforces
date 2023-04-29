/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,a,b,c;
     cin>>t;
     while(t--){
               c=0;
     cin>>a>>b;
     if(a==b){
         cout<<0<<endl;
         continue;
     }
     else{
          if(a<b){
          swap(a,b);
          }
          while(1){
          if(a%8LL==0LL&&(a/8LL)>=b){
               c++;
               a=a/8LL;
          }
        else if(a%4LL==0LL&&(a/4LL)>=b){
               c++;
               a=a/4LL;
          }
         else if(a%2LL==0LL&&(a/2LL)>=b){
               c++;
               a=a/2LL;
          }
          else{
               break;
          }
               }
     }
     if(a==b){
          cout<<c<<endl;
     }
     else{
          cout<<-1<<endl;
     }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




