#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i=0,j;
     string a;
     cin>>n;
     for(j=0;j<n;j++)
     {
         cin>>a;
       if(a[0]=='T')
       {
            i=i+4;
       }
     else if(a[0]=='C')i=i+6;
       else if(a[0]=='O')i=i+8;
        else if(a[0]=='D')i=i+12;
         else if(a[0]=='I')i=i+20;
     }
        cout<<i<<endl;
     return 0;
}
