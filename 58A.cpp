#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,c=0,j=0,n;
     string s,b="hello";
     cin>>s;
  n=s.length();
  for(i=0;i<n;i++)
  {
       if(s[i]==b[j])
       {
            j++;
            c++;
       }
  }
   if(c==5)cout<<"YES"<<endl;
     else
          cout<<"NO"<<endl;
     return 0;
}

