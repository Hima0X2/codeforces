#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,n,c=0;
     string a;
     cin>>n;
     cin>>a;
     for(i=1;i<n;i=i+2){
          if(a[i]==a[i-1]&&a[i]=='a'){
               c++;
               a[i-1]='b';
          }
          if(a[i]==a[i-1]&&a[i]=='b'){
               c++;
               a[i-1]='a';
          }
     }
     cout<<c<<endl;
     cout<<a<<endl;
}
