#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,m,n;
     cin>>a>>b;
     if(a==b){cout<<a<<" "<<"0"<<endl;
     return 0;}
    else if(a>b){
   m=a-b;
   n=m/2;
   if(m==1){
   cout<<b<<" "<<"0"<<endl;
   }
   else{
      cout<<b<<" "<<n<<endl;
   }
     }
     else if(a<b){
          m=b-a;
   if(m!=1){
    cout<<a<<" "<<m/2<<endl;
   }
   else{
      cout<<a<<" "<<"0"<<endl;
   }
     }
}
