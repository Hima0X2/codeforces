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
     long long int t,i,n,j,k,mn;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
for(i=0;i<n-1;i++){
          mn=i;
     for(j=i+1;j<n;j++){
          if(a[mn]>a[j]){
               mn=j;
          }
     }
     if(mn!=i){
          swap(a[i],a[mn]);
     }
     for(k=0;k<n;k++){
          cout<<a[k]<<" ";
     }
cout<<endl;
}
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
