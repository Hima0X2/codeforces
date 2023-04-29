#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i,sum=0,max;
     cin>>n>>m;
     int f[m];
     for(i=0;i<m;i++)
     {
          cin>>f[i];
     }
     sort(f,f+m);
          sum=f[n-1]-f[0];
         for(i=0;i<=m-n;i++){
        if(f[i+n-1]-f[i]<sum)
            sum=f[i+n-1]-f[i];
    }
    cout<<sum<<endl;
     }
