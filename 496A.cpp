#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,i,a[10000],b[10000],j;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     for(i=0,j=0;i<n;i++){
          if(i!=1){
               b[j]=a[i];
               j++;
          }
     }
     int s=b[1]-b[0];
     for(i=2;i<j;i++)
     {
          s=max(s,abs(b[i]-b[i-1]));
     }
     cout<<s<<endl;
}
