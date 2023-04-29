#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,c=0,i;
     string s;
     cin>>s;
     n=s.size();
     //if((n==7)||(n==4)){cout<<"NO"<<endl;return 0;}
    for(i=0;i<n;i++)
     {
          if(s[i]=='4'||s[i]=='7')
          {
               c++;
          }
         // else{c=c;}
     }
    // cout<<c<<endl;
    if((c==7)||(c==4))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 return 0;
}
