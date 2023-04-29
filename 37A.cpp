#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=1,d=1,f=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
     cin>>a[i];
     //i++;
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++){
          cout<<a[i]<<endl;
     if(a[i]==a[i+1]){
          c++;
          if(a[i]!=a[i+2]){
          if(c>f){
               f=c;
               c=1;
          }
          }
     }
     else{
          d++;
     }
    }
     cout<<f<<" "<<d<<endl;
}
