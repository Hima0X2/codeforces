#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i;
     cin>>t;
     while(t--){
               long long int a[10];
          for(i=0;i<4;i++){
               cin>>a[i];
          }
          int p=max(a[0],a[1]);
           int q=max(a[2],a[3]);
           sort(a,a+4);
           if((a[2]==p||a[3]==p)&&(a[2]==q||a[3]==q)){
               cout<<"YES\n";
           }
           else{
               cout<<"NO\n";
           }
     }
}
