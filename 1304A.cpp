#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,a,b,x,y,c,d=0;
     cin>>t;
     while(t--){
          cin>>x>>y>>a>>b;
         if((y-x)%(a+b)==0){
          c=(y-x)/(a+b);
          cout<<c<<endl;
         }
         else{cout<<-1<<endl;}
     }
}
