#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
 long long int t,i,n,c,j;
 for(i=1;i<=10000000;i++){
          c=1;
      for(j=1;j<=i;j++){
          if(i%j!=0){
              a[i]=j;
               c=0;
              break;
          }
      }
      if(c){
          a[i]=j;
      }
     }
 cin>>t;
 while(t--){
          long long int sum=0;
     cin>>n;
     for(i=1;i<=n;i++){
          sum=sum+a[i];
     }
 cout<<sum<<endl;
 }
}
