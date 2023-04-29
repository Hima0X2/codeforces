#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i,sum,c,j;
     cin>>t;
     while(t--){
               c=0;
          sum=0;
          cin>>n;
          long long int a[n+1],b[n+1];
           for(i=0;i<n;i++){
                    cin>>a[i];
                    b[i]=a[i]-i;
           }
           sort(b,b+n);
           for(i=1;i<n;i++){
                    if(b[i]==b[i-1]){
                         c++;
                         sum=sum+(c*(c-1))/2;
                    }
           }
          cout<<sum<<endl;
     }
}

