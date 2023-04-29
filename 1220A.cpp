#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0,j,d=0;
     string s;
     cin>>n;
     cin>>s;
     for(i=0;i<n;i++)
     {
          if(s[i]=='z')c++;
          else if(s[i]=='n')d++;
     }
      for(j=0;j<d;j++){
          cout<<1<<" ";
     }
     for(j=0;j<c;j++){
          cout<<0<<" ";
     }
     cout<<endl;
}
