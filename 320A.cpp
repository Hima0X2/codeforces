#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int j=0,i;
    cin>>s;
    int n=s.length();
    for(i=0;i<n;)
    {
     if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
     {
         i=i+3;
     }
     else if(s[i]=='1'&&s[i+1]=='4'){
          i=i+2;
     }
     else if(s[i]=='1'){
          i++;
     }
     else
     {
          j=1;
          cout<<"NO"<<endl;
          return 0;
     }
    }
   if(j==0) cout<<"YES"<<endl;
   //else
    return 0;
}

