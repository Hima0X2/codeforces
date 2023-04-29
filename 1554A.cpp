#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
               long long int mx1=0,mn=10000000,sum=0,j;
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          for(i=1;i<n;i++){
          sum=max(a[i]*a[i-1],sum);
          }
          cout<<sum<<endl;
     }
}


