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
long long int mp[100],a[mx];

int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
       cin>>n;
       memset(mp,0,sizeof mp);
       long long int c=0;
       for(i=0;i<n;i++){
          cin>>a[i];
       }
       if(n==1){
          cout<<0<<endl;
          continue;
       }
       for(i=0;i<n;i++){
               long long int y=0;
          while(a[i]>0){
               y++;
               a[i]=a[i]/2;
          }
          c=c+mp[y];
          //cout<<y<<" "<<mp[y]<<endl;
          mp[y]++;
       }
       cout<<c<<endl;
     }
}
/// ALHAMDULILLAH


