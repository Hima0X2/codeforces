#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,c=0,d=0,g=0;
     string s;
     cin>>n;
     cin>>s;
     for(i=0;i<n;i++){
              // if(s[i]=='x')c++;
          if(s[i]!='x'){
                    c=0;
            g=d+g;
            d=0;
          }
          if(s[i]=='x'){
                    c++;
               if(c>=3)d=c-2;
          }
     }
     if(s[n-1]=='x'){g=g+d;}
     cout<<g<<endl;
}
