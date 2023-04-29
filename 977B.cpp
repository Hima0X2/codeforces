#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,c=0,f=0,j;
   string s,sum;
   cin>>n;
   cin>>s;
   for(i=0;i<n-1;i++){
           c=0;
     for(j=0;j<n-1;j++){
          if(s[i]==s[j]&&s[i+1]==s[j+1]){
               c++;
          }
     }
     if(c>f){
          f=c;
          sum=string(1,s[i])+string(1,s[i+1]);
              }
   }
   cout<<sum<<endl;
}
