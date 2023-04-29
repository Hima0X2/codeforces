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
     long long int t,i,n,k;
     cin>>t;
     while(t--){
               long long int sum=0,p=0;
cin>>n>>k;
for(i=0;i<k;i++){
     cin>>a[i];
}
sort(a,a+k);
long long int j=1;
for(i=k-1;i>=0;i--){
if(a[i]>sum){
p++;
}
else{
     break;
}
sum=sum+n-a[i];
j++;
}
cout<<p<<endl;
     }
}
/// ALHAMDULILLAH




