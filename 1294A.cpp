#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a[3],t,i,sum;
     cin>>n;
     for(i=0;i<n;i++){
     cin>>a[0]>>a[1]>>a[2]>>t;
    sort(a,a+3);
    t=t-2*a[2]+a[0]+a[1];
    //cout<<t<<endl;
    if((t<0)||(t%3)!=0)
    {
         cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
     }
}
