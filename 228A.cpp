#include<bits/stdc++.h>
using namespace std;
int main()
{
     int s[4],i,j=0;
     //cin>>s1>>s2>>s3>>s4;
     for(i=0;i<4;i++)
     {
         cin>>s[i];
     }
     sort(s,s+4);
     for(i=1;i<4;i++)
     {
          if(s[i-1]==s[i])
          {
               j++;
          }

     }
cout<<j<<endl;
}
