#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,c=0;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++){
         cin>>a[i];
     }
     int max=a[0];
     int min=a[0];
     for(i=0;i<n;i++){
         if(a[i]>max){
          c++;
          max=a[i];
         }
         if(a[i]<min){
          c++;
          min=a[i];
         }
     }
     cout<<c<<endl;
}
