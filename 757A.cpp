#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin>>s;
     int i,c=0,d=0,e=0,f=0,g=0,h=0,j=0;
     for(i=0;i<s.length();i++){
         if(s[i]=='B')c++;
         else  if(s[i]=='u')d++;
         else  if(s[i]=='l')e++;
         else  if(s[i]=='b')f++;
         else  if(s[i]=='a')g++;
          else  if(s[i]=='s')h++;
           else  if(s[i]=='r')j++;
     }
     d=d/2;
     g=g/2;
     cout<<min(c,min(d,min(e,min(f,min(g,min(h,j))))))<<endl;
}
