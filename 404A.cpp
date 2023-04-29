#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,n,c=0;
     string a;
     cin>>n;
     for(i=0;i<n;i++){
              cin>>a;
     }
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               if((a[i]==a[n-j-1])&&(a[i]==a[j])){
                    c++;
               }
          }
     }
     cout<<c<<endl;
}
