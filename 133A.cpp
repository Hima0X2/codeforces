#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int i,b;
     b=s.length();
     for(i=0;i<b;i++)
     {
          if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
          {
           cout<<"YES"<<endl;
           return 0;
          }
     }
      cout<<"NO"<<endl;
     return 0;
}
