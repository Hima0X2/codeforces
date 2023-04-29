#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,a[10000],sum=0;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     for(i=1;i<n-1;i++){
          sum=sum+a[i];
     }
     cout<<sum<<endl;
}
