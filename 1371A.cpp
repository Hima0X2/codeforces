#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==1){
               cout<<"1"<<endl;
          }
          else if(a[i]%2!=0){
               cout<<1+(a[i]-1)/2<<endl;
          }
          else if(a[i]%2==0){
               cout<<(a[i])/2<<endl;
          }
     }
}
