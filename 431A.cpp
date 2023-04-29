#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a1,a2,a3,a4,sum=0,i;
  string s;
  cin>>a1>>a2>>a3>>a4;
  cin>>s;
  int d=s.length();
  for(i=0;i<d;i++){
     if(s[i]=='1'){
          sum=sum+a1;
     }
     else if(s[i]=='2'){
          sum=sum+a2;
     }
      else if(s[i]=='3'){
          sum=sum+a3;
     }
      else if(s[i]=='4'){
          sum=sum+a4;
     }
  }
  cout<<sum<<endl;
}
