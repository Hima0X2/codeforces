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
     long long int t,i,n,l,a,j;
     cin>>t;
     while(t--){
               bitset<31> b;
        int one[31]={0}, zero[31]={0};
     cin>>n>>l;
      for(i=0;i<n;i++){
          cin>>a;
          b=a;
          for(j=0;j<31;j++){
             if(b[j]==1){
               one[j]++;
             }
             else{
               zero[j]++;
             }
          }
      }
      long long int sum=0;
      for(j=30;j>=0;j--){
          if(zero[j]<one[j]){
               sum=sum+pow(2,j);
          }
      }
      cout<<sum<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




