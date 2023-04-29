#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,a[100000],b[100000],c=0,d=0;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i]>>b[i];
     }
      for(i=1;i<n;i++){
          if((a[i]>a[i-1])&&(b[i]<b[i-1])){
               c++;
          }
          else{
               d++;
          }
     }
     if(c>=d)cout<<"Happy Alex\n";
     else{
          cout<<"Poor Alex\n";
     }
}

