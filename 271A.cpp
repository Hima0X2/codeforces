#include<bits/stdc++.h>
using namespace std;
int main(){
     int x,y,a,b,c,d,e,f;
     cin>>x;
     y=x+1;
     while(1){
          a=y/1000;
          b=y-a*1000;
          c=b/100;
          d=b-c*100;
          e=d/10;
          f=d-e*10;
          if((a==c)||(c==e)||(e==f)||(a==e)||(a==f)||(c==f))
          {
               y=y+1;
          }
          else
          {
               break;
          }}
          //cout<<a<<" "<<c<<" "<<e<<" "<<f<<endl;
          cout<<y<<endl;
     return 0;
}
