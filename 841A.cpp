#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,c=1,k;
  cin>>n>>k;
  char s[100];
  for(int i=0;i<n;i++)
  {
  cin>>s[i];
  }
  sort(s,s+n);
  for(int i=1;i<n;i++)
  {
       if(s[i-1]==s[i])
       {
          c++;
       }
       else{
          break;
       }
}
//cout<<c;
if(c<=k){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
