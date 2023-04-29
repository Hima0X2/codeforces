#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n,j,a[100000];
     cin>>n;
     for(i=0;i<n;i++){
          cin>>t;
        for(j=0;j<t;j++){
          a[j]=2;
        }
         for(j=0;j<t-1;j++){
          cout<<a[j]<<" ";
        }
        cout<<a[t-1]<<endl;
     }
}
