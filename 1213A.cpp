#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++){
          cin>>a[i];
          if(a[i]%2!=0){
               c++;
          }
     }
     cout<<min(c,n-c)<<endl;
}

