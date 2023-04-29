#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n;
     string s;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>s;
         int d=s.length();
         if(d<=10)
         {
              cout<<s<<endl;
         }
         else
         {
              cout<<s[0]<<d-2<<s[d-1]<<endl;
         }
     }
}
