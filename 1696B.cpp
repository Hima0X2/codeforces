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
     long long int t,i,n;
     cin>>t;
     while(t--){
cin>>n;
long long int c=0;
for(i=1;i<=n;i++){
     cin>>a[i];
}
a[0]=0;
a[n+1] = 0;
int ok=0;
for(i=0;i<=n+1;i++){
    if(a[i]!=0){
     ok=1;
    }
    else{
          if(ok==1){
               c++;
          }
          //cout<<a[i]<<" ";
     ok=0;
    }
}
cout<<min(2LL,c)<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




