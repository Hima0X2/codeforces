#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,i;
     string s;
     cin>>a;
     cin>>s;
     for(i=1;i<=a;i++){
               //cout<<s[i]<<endl;
          if(a%i==0){
               reverse(s.begin(),s.begin()+i);
          }
     }
     cout<<s<<endl;
}
