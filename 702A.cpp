#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=1,f=1;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     //max=a[0];
      for(i=1;i<n;i++){
          if(a[i-1]<a[i]){
               c++;
               if(c>f)
               {
                    f=c;
               }
               //max=a[i];
          }
          else{c=1;}
     }
     cout<<f<<endl;
}
