#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,k,i,j,a[1000],x,sum=0;
     cin>>t;
     while(t--){
     cin>>n>>k;
     for(j=0;j<n;j++){
          cin>>a[j];
     }
    sort(a,a+n);
        for(i=1;i<n;i++)
        {
            x=k-a[i];
            sum=sum+(x/a[0]);
        }
        cout<<sum<<endl;
        sum=0;
     }
}
