#include<bits/stdc++.h>
using namespace std;
int main()
{
     string b,a;
     int n,i,j;
     cin>>n;
     for(j=0;j<n;j++)
     {
          cin>>b;
          a=b.substr(0,2);
          //cout<<a<<endl;
          for(i=3;i<b.length();i=i+2)
          {
               a=a+b[i];
          }
          cout<<a<<endl;
     }
}
