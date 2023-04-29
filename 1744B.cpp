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
     long long int t,i,n,q,m,x;
     cin>>t;
     while(t--){
               long long int sum=0,sum1=0,o=0,e=0;
cin>>n>>q;
for(i=0;i<n;i++){
     cin>>a[i];
     if(a[i]&1){
          o++;
     }
     else{
          e++;
     }
     sum=sum+a[i];
}
while(q--){
     cin>>m>>x;
     if(m==0){
         sum=sum+e*x;
          if(x&1){
          o=o+e;
          e=0;
     }
     }
     else if(m==1){
          sum=sum+o*x;
           if(x&1){
          e=e+o;
          o=0;
     }
     }
     cout<<sum<<endl;
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




