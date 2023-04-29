#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
 long long int t,a[2],b[2],f[2],ans;
 cin>>t;
 while(t--){
     cin>>a[0]>>a[1];
     cin>>b[0]>>b[1];
     cin>>f[0]>>f[1];
 ans=abs(a[0]-b[0])+abs(a[1]-b[1]);
    if ((a[0] == b[0] && a[0] == f[0] && min(a[1], b[1]) < f[1] && f[1] < max(a[1], b[1]))
        || (a[1] == b[1] && a[1] == f[1] && min(a[0], b[0]) < f[0] && f[0] < max(a[0], b[0])))
        {
             ans=ans+2;
        }
        cout<<ans<<endl;
 }
}


