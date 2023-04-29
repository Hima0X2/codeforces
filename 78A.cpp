#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,d=0,f=0,g=0;
     string a,b,c;
     getline(cin,a);
     getline(cin,b);
     getline(cin,c);
     for(i=0;i<a.length();i++){
          if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
          {
               d++;
          }
     }
      for(i=0;i<b.length();i++){
          if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
          {
               f++;
          }
     }
      for(i=0;i<c.length();i++){
          if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
          {
               g++;
          }
     }
     if(d==5&&f==7&&g==5){
          cout<<"YES\n";
     }
     else{
          cout<<"NO\n";
     }
}
