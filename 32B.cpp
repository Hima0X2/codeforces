#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,d,a[3];
     string s;
     cin>>s;
     d=s.length();
     for(i=0;i<d;i++){
          if(s[i]=='-'){
               if(s[i+1]=='-'){
                    cout<<2;
                    i++;
               }
               else if(s[i+1]=='.'){
                   cout<<1;
                   i++;
               }
          }
          else if(s[i]=='.'){
               cout<<0;
          }
     }
     cout<<endl;
}
