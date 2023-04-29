#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,a[100000],min,j,k;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     min=abs(a[0]-a[n-1]);
     j=n-1;
     k=0;
     for(i=1;i<n;i++){
         if(min>abs(a[i]-a[i-1])){
          min=abs(a[i]-a[i-1]);
          j=i;
          k=i-1;
         }
     }
         cout<<j+1<<" "<<k+1<<endl;
}
