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
               long long int sum1=0,sum2=0,c=0;
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
     if(a[i]<0){
          sum1=sum1+a[i];
          c++;
     }
     else{
          sum0=sum0+a[i];
     }
}
long long int sum=abs(abs(sum1)-abs(sum0));
sort(a,a+n);
if(c>1){

}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




