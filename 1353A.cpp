#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,z;
     cin>>z;
     int m,n;
     for(i=0;i<z;i++)
     {
          cin>>n>>m;
         if(n==1){cout<<"0"<<endl;}
         else if(n==2){cout<<m<<endl;}
         else{cout<<m*2<<endl;}
     }
}
