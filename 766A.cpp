#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,t,i,j;
     cin>>s>>t;
     int d=s.length();
     int c=t.length();
     if(s==t)cout<<-1<<endl;
     else{
          if(d<c)cout<<c<<endl;
          else cout<<d<<endl;
     }
}
