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
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,x,j;
     cin>>n>>x;
    // set<long long int> s;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     bool ok=false;
     for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
               if(a[i]+a[j]==x&&a[i]!=a[j]){
                    ok=true;
                    break;
               }
          }
          if(ok){
               break;
          }
     }
     if(ok){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
}
/// ALHAMDULILLAH




