#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     int i,d,c=0;
     cin>>s;
     d=s.length();
     for(i=0;i<d;i++){
          if(s[i]=='Z'&&s[i+1]=='O'&&s[i+2]=='N'&&s[i+3]=='e'){
               c++;
          }
     }
     cout<<c<<endl;
}
