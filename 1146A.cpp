#include<bits/stdc++.h>
using namespace std;
int main()
{
     int c=0,d,i,e=0;
     string s;
     cin>>s;
     d=s.length();
     for(i=0;i<d;i++){
          if(s[i]=='a'){
               c++;
          }
     }
     cout<<min(d,2*c-1)<<endl;

}
