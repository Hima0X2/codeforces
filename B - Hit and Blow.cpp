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
long long int a[mx],b[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,c=0,d=0,j;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     for(i=0;i<n;i++){
          cin>>b[i];
     }
  for(i=0;i<n;i++){
          if(a[i]==b[i]){
            c++;
          }
     }
       for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          if((a[i]==b[j])&&i!=j){
               d++;
          }
        }
     }
     cout<<c<<endl;
     cout<<d<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




