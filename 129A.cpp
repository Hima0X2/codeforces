#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,sum=0,c=0;
     cin>>n;
     int a[n];
     for(i=1;i<=n;i++){
          cin>>a[i];
          sum=sum+a[i];
     }
     //if(sum==1){cout<<"1"<<endl;return 0;}
      for(i=1;i<=n;i++){
          sum=sum-a[i];
          //if(sum==0)break;
           if(sum%2==0){
          c++;}
               sum=sum+a[i];
     }
     cout<<c<<endl;
}
