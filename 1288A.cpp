#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
long long int t,n,d;
cin>>t;
while(t--){
          long long int sum;
          bool flag=true;
     cin>>n>>d;
     long long int x=1;
     if(d<=n){
          cout<<"YES\n";
          continue;
     }
     while(x<=n){
               sum=x+ceil((double)d/(double)(x+1));
               x++;
               if(sum<=n){
               cout<<"YES\n";
               flag=false;
               break;
               }

     }
     if(flag){
          cout<<"NO\n";
     }
}
}


