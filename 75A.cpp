#include<bits/stdc++.h>
using namespace std;
int zero(int z){
     int p,rev,sum=0,i=1;
     while(z!=0){
     if(z%10==0){
          z=z/10;
     }
     else{
          p=z%10;
          sum=sum+p*i;
          z=z/10;
          i=i*10;
     }}
     return sum;
}
int main()
{
     int a,b,c;
     cin>>a>>b;
          c=a+b;
     a=zero(a);
     b=zero(b);
     c=zero(c);
     if(a+b==c){cout<<"YES"<<endl;}
     else{cout<<"NO"<<endl;}
}
