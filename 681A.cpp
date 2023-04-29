#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,b,c=0,a;
     string s;
     cin>>n;
     while(n--)
     {
          cin>>s;
         cin>>b>>a;
          if(b<a&&2400<=b){
               c=1;
          }
     }
     if(c==1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
