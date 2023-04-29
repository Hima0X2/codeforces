#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,n,f=0;
      long long int a[100000];
     cin>>n;
     for(i=1;i<=n;i++){
          cin>>a[i];
     }
      for(i=1;i<=n;i++){
          if(a[a[a[a[i]]]]==a[i]){
               f=1;
               break;
          }
     }
     if(f==1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
