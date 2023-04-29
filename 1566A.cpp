/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n,s;
     cin>>t;
     while(t--){
      cin>>n>>s;
      i=n;
      if(n&1){
          n=(n+1)/2;
      }
      else{
          n=n/2;
      }
      cout<<s/(i-n+1)<<endl;
     }
}
/// ALHAMDULILLAH



