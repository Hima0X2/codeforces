#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,flag=0,i;
     scanf("%d",&n);
    string s;
        cin>>s;
      for(i=0;i<n;i++)
      {
           s[i]=tolower(s[i]);
      }
      //cout<<s<<endl;
     sort(s.begin(),s.end());
      for(i=0;i<n;i++)
      {
      if(s[i]!=s[i+1])
      {
           flag++;
      }
      }
      if(flag==26)cout<<"YES"<<endl;
      else
      {
           cout<<"NO"<<endl;
      }
      return 0;
}
