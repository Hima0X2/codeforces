#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,c,sum=1;
     cin>>n>>c;
     int a[n];
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
      for(i=1;i<n;i++){
         if(a[i]-a[i-1]<=c)sum++;
         else{sum=1;}
     }
     cout<<sum<<endl;
}
