#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long i,n,d[10000],a,b,j,sum=0;
     cin>>n;
     for(i=1;i<n;i++){
          cin>>d[i];
     }
    // sort(d,d+n-1);
     cin>>a>>b;
     for(j=a;j<b;j++){
         sum=sum+d[j];
     }
     cout<<sum<<endl;
}
